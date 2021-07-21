
#include <iostream>
#include "Cat.h"

using namespace std;

/*
*     Cat();  Constructor
*    ~Cat();  Destructor
! It sits in the public space

? The curly brackets are the region where objects exist
?? After curly bracket, the obj is destroyed
*/

int main()
{
    cout << "Starting program ...\n"
         << endl;

    { // ? Allocate memory to this
        Cat Meep;
        Meep.speak();
    } // ? Deallocate the memory here
    // * Cat Meep; No longer exists

    cout << "\nEnding program ..." << endl;

    return 0;
}
