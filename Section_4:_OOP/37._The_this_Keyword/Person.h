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
    Person(string Name, int Age);
    string toString();
};

#endif