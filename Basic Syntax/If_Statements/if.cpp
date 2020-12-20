#include <iostream>

using namespace std;

int main()
{
    string Passcode = "Hellow";

    cout << "Enter password to enter: " << flush;
    string Entered_word;
    cin >> Entered_word;

    cout << "\nYou said: '" << Entered_word << "'" << endl;

    if (Entered_word == Passcode)
    {
        cout << "\nWell hello there Sir" << endl;
    }
    if (Entered_word != Passcode)
    {
        cout << "\nWrong password, This will self destruct in 0.024 seconds" << endl;
        cout << "BOOM" << endl;
    }

    return 0;
}