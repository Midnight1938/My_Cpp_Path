#include <iostream>

using namespace std;

/*
* Const just makes the variable unchangable
* Useful when we want to reduce bug chances
*/

class Animal //? Used class here isntead of going via header file since itse a small class and hence, not worth it
{
private:
    string name;

public: //! Just writen in a line, no big deal
    void setName(string name) { this->name = name; };
    void speak() const { cout << "My name is: " << name << endl; } //? Const because instance data doesnt change
};

int main()
{

    const double PI = 3.141592;
    cout << "Const Pi is:\t" << PI << endl;

    //* Class with the const *//
    Animal animal;
    animal.setName("Skshm");
    animal.speak();

    //* Using constant ints *//
    int value = 6;

      //? const int * const pValue = &value; 
     //* a constant pointer to a constant int
    //! Makes it completely constant, so the rest will break

    int *pValue = &value;

    cout << *pValue << endl;

    int number = 11;
    pValue = &number; //? Error with: int * const pValue = &value;  (constant pointer)
    *pValue = 12;     //? Error with: const int *pValue = &value;   (constant int)

    cout << *pValue << endl;

    return 0;
}