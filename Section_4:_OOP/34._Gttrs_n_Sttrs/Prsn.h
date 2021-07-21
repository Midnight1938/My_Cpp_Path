// ? This is header file
// * we used the function through here

#ifndef PRSN_H_
#define PRSN_H_

#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    Person(); //  Blank Var

    string toString(); // Empty string area
    string getName();  // Empty string area

    void setName(string newName);
};

#endif // PRSN_H_ //