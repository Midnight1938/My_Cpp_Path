#include <iostream>

using namespace std;

/*
* New allocates memory for an object or array of objects of type-name 
* from the free store and returns a suitably typed, nonzero pointer
* to the object.
! ALWAYS destroy a new constructor as it stays in the system for no reason
! Deleting without calling can cause a crash
*/

class Animal
{
private:
    string name;

public:
    Animal()
    {
        cout << "Animal created." << endl;
    }

    Animal(const Animal &other) : name(other.name)
    {
        cout << "Animal created by copying." << endl;
    }

    ~Animal()
    {
        cout << "Destructor called" << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void speak() const
    {
        cout << "My name is:\t" << name << endl;
    }
};

int main()
{
    Animal *pCat1 = new Animal(); // () are style related
    pCat1->setName("Jack");       //? we used the -> because we cant call '.' on a pointer only on an obj
    pCat1->speak();

    /*
    * The * would work instead of the -> by using (*pCat1) but 
    * the '->' is the syntax, for pointers to obj
    */
    
    delete pCat1;

    cout << "Size of pCat1:\t" << sizeof(pCat1) << endl;

    return 0;
}