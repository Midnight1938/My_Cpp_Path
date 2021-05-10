#include <iostream>
using namespace std;

/*
! Whats a switch
* Cant have variables in case
* * unless its a constant 
* * * 'const Value = 6' will work
*/

int main()
{

    cout << "Gimmie a number! " << flush;
    int value;
    cin >> value;

    switch (value)
    {
    case 69:
        cout << "The value is 69. \n Nice!" << endl;
        break;

    case 4:
        cout << "The value is 4. " << endl;
        break;
    case 2:
        cout << "The value is 2. " << endl;
        break;
    default:
        // ? Incase no caselabels match
        cout << "value unrecognized" << endl;
        // No break cuz it is the last condition
    }

    return 0;
}