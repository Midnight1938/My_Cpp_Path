#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak() // ? Since its being used as a class 'Cat'
{
    if (happy)
    {
        cout << "Meaowah!" << endl;
    }
    else
    {
        cout << "Hissssss" << endl;
    }
}

void Cat::madeHappy()
{
    happy = true;
}
void Cat::madeSad()
{
    happy = false;
}
