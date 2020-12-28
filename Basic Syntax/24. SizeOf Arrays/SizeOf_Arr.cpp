#include <iostream>

using namespace std;

int main()
{
    int Valuu = 34;

    cout << "Size of our variable 'Valuu' is: " << sizeof(Valuu) << endl;

    int Arr_Vals[] = {4, 7, 8, 2, 9}; // Its size changes dynamically

    cout << "\nSize of our array 'Arr_Vals' is: " << sizeof(Arr_Vals) << endl;
    cout << "Size of an Int is: " << sizeof(int) << endl;

    cout << "\nOur ArrayVals are\t" << endl;
    for (int i = 0; i < sizeof(Arr_Vals) / sizeof(int); i++)
    {
        cout << Arr_Vals[i] << " " << flush;
    }
    cout << endl;

    return 0;
}