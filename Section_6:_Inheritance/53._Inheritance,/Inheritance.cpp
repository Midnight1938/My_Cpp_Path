#include <iostream>

using namespace std;

/*
* A class can inherit the functions of another class
* We cant Use Object names as it is
*/

class Animal
{
public:
    void Speak() { cout << "Cute Animal Noises" << endl; }
};

class Cat : public Animal //! A SubClass
{
public:
    void Purr() { cout << "Purring Noises" << endl; }
};

class Tiger : public Cat
{
public:
    void Attac() { cout << "He Attac" << endl; }
};

int main()
{

    string Anim1 = "Pooh";
    string Anim2 = "Tabby";
    string Anim3 = "Tigger";

    Animal Pooh;
    cout << "\nIn Comes " << Anim1 << endl;
    Pooh.Speak();

    Cat Tabby;
    cout << "\nIn Comes " << Anim2 << endl;
    Tabby.Speak();
    Tabby.Purr();

    Tiger Tigger;
    cout << "\nIn Comes " << Anim3 << endl;
    Tigger.Speak();
    Tigger.Purr();
    Tigger.Attac();

    return 0;
}