#include <iostream>

using namespace std;

/*
* CPP made a special constructor for us, that copies 
* The settings of one constructor to another, making it simply run once/faster
? Other refers to whatever is on the right side of the equal
! We cant call non const methods in a copy constructor
*/

class Animal
{
private:
    string name;

public: //! Making our own Copy Constrctr
    Animal()
    {
        cout << "Animal Named." << endl;
    };

    Animal(const Animal &other) : name(other.name) //! Const used so that the other never changes
    {                                              //? Other passed as reference
        cout << "New Animal Named with copy." << endl;
    };
    void setName(string name)
    {
        this->name = name;
    };
    void speak() const
    {
        cout << "My name is:\t" << name << endl;
    } //? Const because instance data doesnt change
};

int main()
{
    Animal Animal1;
    Animal1.setName("Jake");
    Animal1.speak();

    Animal Animal2 = Animal1;
    Animal2.speak();
    Animal2.setName("Markus");

    Animal2.speak();

    //! Other valid way to call Copy Constructor
    Animal Animal3(Animal1);
    Animal3.speak();

    return 0;
}