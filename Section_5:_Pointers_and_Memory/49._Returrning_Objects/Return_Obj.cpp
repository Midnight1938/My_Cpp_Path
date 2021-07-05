#include <iostream>

using namespace std;

/*
! The Free Stander will crash most of the time when destructor called but it doesnt exist
* So we used new, to make sure it has something in there
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

//* Free standing function with reference
Animal *createAnimal()
{
    //! Animal x; /// Will crash most of the time !//
    Animal *pAnimal = new Animal;
    pAnimal->setName("Vinod");
    return pAnimal;
}

int main()
{
    Animal *pFrog = createAnimal();
    pFrog->speak();

    delete pFrog;

    return 0;
}