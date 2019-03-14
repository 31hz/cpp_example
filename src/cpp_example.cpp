#include <iostream>
#include "Animal.h"
#include "Egret.h"
#include "Truck.h"
#include "Dumptruck.h"

int main() {

    std::cout << "Ready to create an Egret.  Base and derived class constructors will run:\n";
    Animal *egretPtr = new Egret();   // base type pointer but it's really an Egret

    std::cout << "Ready to delete the Egret.  Derived class destructor will NOT run (bug):\n";
    delete(egretPtr);

    std::cout << "\nReady to create a Dumptruck.  Base and derived class contstructors will run:\n";
    Truck *dumptruckPtr = new Dumptruck(); // base type pointer but it's really a Dumptruck

    std::cout << "\nReady to delete the Dumptruck.  Base and derived class destructors will run (fix):\n";
    delete(dumptruckPtr);

    return 0;
}
