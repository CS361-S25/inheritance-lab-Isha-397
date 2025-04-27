#include "emp/base/vector.hpp"
#include "emp/base/Ptr.hpp"
#include <ostream>
#include "Animal.h"
#include "Dog.h"


int main() {
    emp::vector<emp::Ptr<Animal>> population;

    // Add a Dog instance to the vector
    population.push_back(new Dog(5, 2));

    std::cout << population[0]->GetType() << std::endl; // Should print "Dog"
    std::cout << population[0]->GetAge() << std::endl; // Should print dog's age in dog years

    population.push_back(population[0]->Reproduce());
    std::cout << population[1]->GetType() << std::endl; // Should print "Dog"

    return 0;
}

