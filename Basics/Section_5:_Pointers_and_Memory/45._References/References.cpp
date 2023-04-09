#include <iostream>

using namespace std;

/*
? The & herre is a different use case compared to pointers, var2 with an &, refers to val1
? Like an alias; Which means Both point to the same thing
*/

void ChangedValMachine(double &valuu)
//? Without the & in the funciton.
//? The 2 variables are seperate.
{
    valuu = 123.4;
}

int main()
{
    int val1 = 8;
    int &val2 = val1; //! int& val2 works too
    val2 = 10;

    cout << "Value 1:\t" << val1 << endl;
    cout << "Value 2:\t" << val2 << endl;

    //* USE CASE *//

    double valu = 4.321;
    ChangedValMachine(valu);

    cout << valu << endl;

    return 0;
}