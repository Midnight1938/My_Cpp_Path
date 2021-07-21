#include <iostream>

using namespace std;

int main()
{
    int Val = 1;

    do // Executes
    {
        cout << "Hey there Mr. " << Val << endl;
        Val++;
    } while (Val <= 10); // Checks

    // A password Cheker

    const string Password = "Pas5w0rd!"; // Const makes it Global-y

    cout << "\n\nChecking for right password.........." << endl;

    string Pword;

    do
    {
        cout << "\nENTER YOU PASSCODE: " << flush;

        cin >> Pword; // Exists within Do loop

        if (Pword != Password)
        {
            cout << "Access Denied" << endl;
        }
    } while (Pword != Password); // We did the 'Do' loop while this was true

    cout
        << "\nAccess Granted"
        << "\n\tWelcome to the end" << endl;

    return 0;
}