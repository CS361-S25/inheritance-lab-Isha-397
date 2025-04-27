#include "emp/base/vector.hpp"
#include "emp/base/Ptr.hpp"
#include <ostream>
#include <string>

#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
private:
    int num_spots;

public: 
    Dog(int _age, int _num_spots) : Animal(_age), num_spots(_num_spots){}

    std::string GetType() override {return "Dog"; }

    int GetSpots() { return num_spots; }

    int GetAge() override { return Animal::GetAge() * 7; } // Example of custom behavior (dog years)

    emp::Ptr<Animal> Reproduce() { return new Dog(0, GetSpots()); }

};

#endif