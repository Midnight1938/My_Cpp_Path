#include <iostream>

using namespace std;

/*
* We are allocating arrays of primitive types
* * ie Int, Double, Long etc
TODO: Create a similar class, with in an instance var and a string type
TODO:: Allocate an array for 26, then set main to contain all alphabets, 
TODO::: and output the string formed with it
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
        cout << "Destructor called." << endl;
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
    Animal *pAnimal = new Animal[10]; // ! Mem made for 10 Objs

    pAnimal[4].setName("Charles"); //? Name for Instance 4
    pAnimal[5].setName("James");   //? Name of Instance 5
    pAnimal[5].speak();
    pAnimal[6].speak(); //? Blank cuz it doesnt exist

    delete[] pAnimal; // ? tells it that we are deleting all that we allocated
                      //? If we dont then we leave n-1 objs behind using up space

    //* Created and deleted 1000 str characters *//
    char *pMem = new char[1000];
    delete[] pMem;

    //! An Example for the TODO task
    char c = 'a';      //? Make a string with a character a
    c++;               // lol
    string name(5, c); //? A string with 5 c instances
    cout << name << endl;

    return 0;
}