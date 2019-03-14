#ifndef _TRUCK_H
#define _TRUCK_H
#include <string>

class Truck {

    protected:
    std::string myMake;

    public:

    std::string getMake();

    void setMake(std::string make);

    // constructor
    Truck();

    // destructor
    virtual ~Truck();
};
#endif
