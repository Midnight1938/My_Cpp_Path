#include <iostream>
using namespace std;

int main()
{
    cout << "GIMMIE YOUR NAME! " << flush;

    string input;
    cin >> input;

    cout << "So your name is " << input << "... Nice. \n"
         << endl;

    cout << "Gimmie a number! " << flush;
    int Num1;
    cin >> Num1;

    cout << "Gimmie another number! " << flush;
    int Num2;
    cin >> Num2;

    cout << "\n"
         << input << "Youve entered numbers: \n"
         << Num1 << " And " << Num2 << endl;
    cout << "Which when mathematically messed with have: " << endl;

    cout << " Sum: " << Num1 + Num2 << endl;
    cout << " Subt: " << Num1 - Num2 << endl;
    cout << " Mult: " << Num1 * Num2 << endl;
    cout << " Div: " << Num1 / Num2 << endl;
}