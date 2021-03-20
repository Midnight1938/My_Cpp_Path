#include <sstream>
#include "Person.h"

Person::Person()
{
    Name = "";
    Age = 0;
}

Person::Person(string Name, int Age)
{
    this->Name = Name; // Equivalent to Name = newName
    this->Age = Age;

    cout << "Memory location of Obj: " << this << endl;
}

string Person::toString()
{
    stringstream ss;

    ss << "Person's Name: ";
    ss << Name;
    ss << "\n\tAge: ";
    ss << Age;

    return ss.str();
}