#include <iostream>

using namespace std;

/*
* A normal sizeof returns one extra value, which, in int values (using (int)text[i]) is zero
! Thats called the null terminator, lets program know when string ends
TODO []: 

*/

int main()
{
    char CompText[] = {'H', 'e', 'l', 'l', 'o'}; //? A character Array
    char text[] = "World!";                      //? Also an array

    for (int i = 0; i < sizeof(text); i++)
    {
        cout << i << " : " << text[i] << " : " << (int)text[i] << endl;
    }

    //? Using while to pass the nullterminator
    int k = 0;
    while (true)
    {
        if (text[k] == 0) //! Turning this into anything else gives out the hex file data
        {
            break; //! Can use one liners without enclosing in {} brackets
        }

        cout << text[k] << flush;
        k++;
    }

    return 0;
}