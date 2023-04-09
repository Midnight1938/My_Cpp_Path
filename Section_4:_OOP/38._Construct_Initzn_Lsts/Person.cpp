#include <sstream>
#include "Person.h"

string Person::toString()
{
    stringstream ss;

    ss << "Person's Name: ";
    ss << Name;
    ss << "\n\tAge: ";
    ss << Age;

    return ss.str();
}