#include <iostream>

using namespace std;

/*
* Prints 0 if answer is 0 and 1 forever if answer is 1
*/

int main()
{
    cout << "Enter the number: " << flush;
    int Val;
    cin >> Val;

    if (Val == 0)
    {
        cout << "Its a " << 0 << endl;
    }
    else if (Val == 1)
    {
        cout << "Its a 1 so:\n"
             << endl;
        while (true)
        {
            cout << 1 << flush;
        }
    }

    return 0;
}