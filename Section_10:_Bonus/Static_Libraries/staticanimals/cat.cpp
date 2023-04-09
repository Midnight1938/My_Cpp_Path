#include "cat.h"
#include <iostream>

/*
* Since we plan on using this as a static library then we cant include stuff in header as we would have to put that in too
*/

namespace CatLib
{
    void saySomething() { std::cout << "Hello there" << std::endl; };
    cat::cat() { std::cout << "Purrrr" << std::endl; };
    void cat::Speak(){};
    cat::~cat(){};
};