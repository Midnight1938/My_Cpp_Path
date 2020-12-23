#include <iostream>

using namespace std;

int main()
{
    int i = 1;

    while (i <= 10)
    {
        cout << "Infiniteeee, nah, " << i << " times" << endl;
        i++; //* Better than i = i+1
             //* Equivalent to i += 1 in Python
    }

    cout << "\nEnd Of programm" << endl;

    return 0;
}