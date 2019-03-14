#include <string>
#include <iostream>
#include "Animal.h"

std::string Animal::getName() {
    return myName;
}

void Animal::setName(std::string name) {
    myName = name;
}

Animal::Animal() {
    std::cout << "Animal is being constructed\n";
}
