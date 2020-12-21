#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float Val1 = 2.2;

    if (Val1 < 2.22) // Cuz no float is ever what we tell it to be
    {
        cout << "It is less than 2.22" << endl;
    }
    else
    {
        cout << "Its not equal" << endl;
    }

    cout << setprecision(10) << "The number is " << Val1 << " with 10 digit precision" << endl;
    return 0;
}