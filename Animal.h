#include "emp/base/vector.hpp"
#include "emp/base/Ptr.hpp"
#include <ostream>
#include <string>


#ifdef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
    private:
        int age;
    
    public:
        Animal(int _age) : age(_age) {}
    
        // Remove the first `GetType()` definition
        // std::string GetType() { return "Animal"; } 
    
        virtual std::string GetType() { return "Animal"; }
        virtual int GetAge() { return age; }
        virtual emp::Ptr<Animal> Reproduce() { return new Animal(0); }
    };
    

#endif