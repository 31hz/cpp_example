#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <string>

class Animal {

    protected:
    std::string myName;

    public:

    std::string getName();

    void setName(std::string name);

    // constructor
    Animal();

};
#endif
