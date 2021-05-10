#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() // ? Cat function in Cat class
{
    cout << "Cat created." << endl;
    // Plays on construction
    
    happy = true;
}

Cat::~Cat() // ? ~Cat function in Cat class
{
    cout << "Cat destroyed." << endl; 
    // Plays on destruction
}

void Cat::speak()
{
    if (happy)
    {
        cout << "Meouww!" << endl;
    }
    else
    {
        cout << "Ssssss!" << endl;
    }
}
