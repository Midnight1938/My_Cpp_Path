#include <iostream>

using namespace std;

/*
*  Continue Skips the thing
*  Break just Quits
*/

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << "Nummber is " << i << "\t It was printed cuz its Even" << endl;
    }

    // !! A better Do-While Password Loop
    const string Password = "Pas5w0rd!"; // Const makes it Global-y

    cout << "\n\nChecking for right password.........." << endl;
    string Pword;

    do
    {
        cout << "\nENTER YOU PASSCODE: " << flush;
        cin >> Pword;
        if (Pword == Password)
        {
            break;
        }
        else
        {
            cout << "Access Denied" << endl;
        }
    } while (true);

    cout
        << "\n\tAccess Granted"
        << "\n\tWelcome to the end" << endl;

    return 0;
}