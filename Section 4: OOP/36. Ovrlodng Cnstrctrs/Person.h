// ? This is header file
// * we used the function through here

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person
{
private:
    string Name;
    int Age;

public:
    Person();
    Person(string newName)
    {
        Name = newName;
        Age = 0;
    };
    Person(string newName, int newAge);
    string toString();
};

#endif