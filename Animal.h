#ifdef ANIMAL
#define ANIMAL

#include <string>

class Animal {
private:
    int age;

public:
    Animal(int _age) : age(_age) {}
    std::string GetType() {return "Animal"; }
    int GetAge () {return age; }
    virtual std::string GetType() { return "Animal"; }
    virtual emp::Ptr<Animal> Reproduce() { return new Animal(0); }
    
};

#endif