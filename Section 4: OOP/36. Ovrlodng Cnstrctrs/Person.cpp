#include <sstream>
#include "Person.h"

Person::Person()
{
    Name = "Undefind";
    Age = 0;
}

Person::Person(string newName, int newAge)
{
    Name = newName;
    Age = newAge;
}

string Person::toString()
{
    stringstream ss;

    ss << "Person's Name: ";
    ss << Name;
    ss << "\tAge: ";
    ss << Age;

    return ss.str();
}