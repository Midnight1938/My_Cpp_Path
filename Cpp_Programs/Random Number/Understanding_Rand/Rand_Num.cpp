#include <iostream>
#include <cstdlib>
#include <list>

#include "Header-4-Linking.h"

using namespace std;

/*
* Random number with rand will always be the same
* So we use srand to randomize it further
*/

int main()
{
    //list<int> Sames_List; //* A list for the same numbers

    cout << "As you can see, its always the same:\t" << flush;
    for (int i = 1; i <= 5; i++)
    {
        cout << (rand() % 5) + 1 << flush; //* using rand to generate a number 0 to 5 but always the same numbers
    }

    With_sRand Example; //? Example of what happens with sRand
    cout << "\nWhile the one using sRand is always different:\t" << flush;
    Example.sRand_Magic();
    cout << "\n\nFIN" << endl;
    return 0;
}