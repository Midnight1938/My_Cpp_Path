#include <iostream>

using namespace std;
/*
* You can always use a derive class where a super calss is expected
* * 'virtual' creates a virtual table taht enables it to lookup the right method from the right subclass by the name of the subclass
* * * SO when we override a virtual in subclasses we get the right kind of method being called for the actual obj that the pointer/reference points at
* * Its good practice  to add virtual to the  overrides too btw
! Destructors (~class) should often be virtual so that the right destructors are called
? The Speak=0 ensures that any decendent of the superclass must have an implementation of that method
? ? The Class is now an Abstract base class and the Speak is a pure Virtual method
*/

class Animal
{
public:
    //virtual void Speak() { cout << "??????" << endl; }
    virtual void Speak()=0;

    virtual ~Animal(){};
};
class Wolf : public Animal
{
public:
    void Speak() { cout << "Wolf says awWWOOoo" << endl; }

    virtual ~Wolf(){};
};
class Dog : public Wolf
{
public:
    void Speak() { cout << "Dog says Woof" << endl; }

    virtual ~Dog(){};
};

int main()
{
    Animal *pAnimal = new Wolf; //* Would say ?????? without the virtual
    Animal *pAnimalD = new Dog; //* Would say ?????? without the virtual

    pAnimal->Speak();
    pAnimalD ->Speak();

    delete pAnimal;
    delete pAnimalD;
    return 0;
}