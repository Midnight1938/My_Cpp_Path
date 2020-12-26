#include <iostream>

using namespace std;

int main()
{

    int Multip_tbl[11][3];

    cout << "Multiplication Table: " << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << "\nTable of " << i << endl;
        for (int j = 1; j <= 10; j++)
        {
            Multip_tbl[i][0] = i;
            Multip_tbl[i][1] = j;
            Multip_tbl[i][2] = Multip_tbl[i][0] * Multip_tbl[i][1];
            cout << Multip_tbl[i][0] << " * " << Multip_tbl[i][1] << " = " << Multip_tbl[i][2] << endl;
        }
    }

    return 0;
}