#include <iostream>

using namespace std;

/*
* It means hiding away the instance vars and provide public methods which the user can call
? We can have multiple private and public methods. Which can be in any order we want
! Keep as much of the class private, to reduce the possibilitry of messing up
TODO: Make class with private data and medhots, call them in public methods
*/

class Frog
{
private:
    string name;

public: //? Public constructor cus constructor is called from outside the class
    Frog(string name) : name(name) {}
    void info() { cout << "My Names is " << getName() << endl; }

private: //? New so that it dosent mess with the other method, and they can be in any order
    string getName() { return name; }
};

int main()
{
    Frog froggo("Fred");

    // cout << froggo.getName() << endl; //* Wont work as its in Private
    froggo.info();                      //* But we go via via

    return 0;
}