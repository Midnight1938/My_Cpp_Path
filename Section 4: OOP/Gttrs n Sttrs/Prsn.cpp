#include "Prsn.h"

Person::Person()
{
    name = "Skshm";
}

string Person::toString() // ? Reurning Name Variable
{
    return "Hi I'm " + name;
}

void Person::setName(string newName) // ? Chainging 'Name' of Variable
{
    name = newName;
}

string Person::getName() // ? Second method to get a name
{
    return name;
}
