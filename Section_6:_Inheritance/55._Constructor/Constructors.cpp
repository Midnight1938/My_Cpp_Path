#include <iostream>

using namespace std;

/*
* A constructor cannot be called by subclasses, so we call the base constructor in subclasses
*/

class Machine
{
private:
    int id;

public:
    Machine() : id(0) { cout << "Machine no-Arg constructor called" << endl; }
    Machine(int id) : id(id) { cout << "Machine Paramaterized constructor called" << endl; }
    void info() { cout << "ID: " << id << endl; } //? We cant refer to the id in Vehicle
};

class Vehicle : public Machine
{
public:
    Vehicle(int id) : Machine(id) { cout << "Vehicle Paramaterized constructor called" << endl; } //? So we ask it to run the machine constructor
    Vehicle() { cout << "Vehicle no-Arg constructor called" << endl; }
};

class Plane : public Vehicle
{
public:
    Plane(): Vehicle(789) { cout << "Plane no-Arg constructor called" << endl; } //! Here the No-Arg calls the Vehicle constructor, which calls the Machine Constructor
};

int main()
{
    Machine Mech(123);
    Mech.info();
    cout << "\n"
         << endl;
    
    Vehicle Vehic(456); //? We cant call the main constructor with Vehic as is cuz we only defined it in Machine
    Vehic.info();       //? We cant call the main constructor with Vehic as is cuz we only defined it in Machine
    cout << "\n"
         << endl;

    Plane Tomahawk;
    Tomahawk.info(); //? We input the id Directly so no need to enter ID

    return 0;
}