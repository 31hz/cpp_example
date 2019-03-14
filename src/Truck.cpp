#include <string>
#include <iostream>
#include "Truck.h"

std::string Truck::getMake() {
    return myMake;
}

void Truck::setMake(std::string make) {
    myMake = make;
}

Truck::Truck() {
    std::cout << "Truck is being constructed\n";
}
