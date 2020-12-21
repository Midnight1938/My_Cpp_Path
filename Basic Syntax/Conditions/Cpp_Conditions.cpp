#include <iostream>

using namespace std;

/*
* == Equal
* != not equal
* < less than
* <= less than or equal to
* > greater then
* >= greater then or equal to
*/

int main()
{
    int Val1 = 8;
    int Val2 = 3;

    cout << "Value 1: " << Val1 << "\nValue 2: " << Val2 << endl;

    if (Val1 < 9)
    {
        cout << "\nCondition 1 (Val1 < 9):\n True\n"
             << endl;
    }
    else
    {
        cout << "\nCondition 1 (Val1 < 9):\n False\n"
             << endl;
    }

    if (Val1 == 8 && Val2 < 3) // ? And statement
    {
        cout << "Condition 2 (Val1 == 8 && Val2 < 3):\n True\n"
             << endl;
    }
    else if (Val1 == 8 && Val2 <= 3)
    {
        cout << "Condition 2.1 (Val1 == 8 && Val2 <= 3):\n True\n"
             << endl;
    }
    else
    {
        cout << "Condition 2 (Val1 == 8 && Val2 <= 3):\n False\n"
             << endl;
    }

    if (Val1 >= 8 || Val2 == 3) // ? Or statement
    {
        cout << "Condition 3 (Val1 >= 8 || Val2 == 3):\n True\n"
             << endl;
    }
    else
    {
        cout << "Condition 3 (Val1 >= 8 || Val2 == 3):\n False\n"
             << endl;
    }

    if (Val2 != 8 && Val1 == 3 || Val1 > 7)
    {
        cout << "Condition 4 (Val2 != 8 && Val1 == 3 || Val1 > 7):\n True\n"
             << endl;
    }
    else
    {
        cout << "Condition 4 (Val2 != 8 && Val1 == 3 || Val1 > 7):\n False\n"
             << endl;
    }
    bool Condition1 = (Val2 != 8) && (Val1 == 10);
    cout << "Bool Cond1 [(Val2 != 8) && (Val1 == 10)]: ---->\t " << Condition1 << endl;

    bool Condition2 = (Val2 != 8) && (Val1 <= 10);
    cout << "Bool Cond2 [(Val2 != 8) && (Val1 == 8)]:  ---->\t " << Condition2 << endl;

    if (Condition1 || Condition2)
    {
        cout << "\nBool thing Condition 5: True" << endl;
    }
    else
    {
        cout << "\nBool thing Condition 5: False" << endl;
    }

    if (Val1 + Val2 == 11)
    {
        if (Condition2)
        {
            cout << "\nThe sum is " << Val1 + Val2 << " And Val2 is not 8 and Val1 is less than 10" << endl;
        }
    }
    else
    {
        cout << "\nThe sum isnt 11"
             << " And Val2 is 8 and Val1 is more than 10" << endl;
    }

    return 0;
}