#include <iostream>

using namespace std;

/*
* +
* -
* *
* /
* +=
* -=
* /=
* *=
* % :: Remainder
* %=
* precedence
*/

// Take seconds and convert it to hours, minutes and seconds
// For loop  that iterates 10,000 timesna d output a dot (on same line) every 100 iteration

int main()
{
    int Val1 = 7/2; // ? Cpp always disregards remainder
    cout << "7/2 Makes:\t " << Val1 << endl;

    double Val1_1 = 7.0/2; //? One of them needs to be a float to use the remainder
    cout << "7.0/2 Makes:\t " << Val1_1 << endl;
    
    double Val1_2 = (double)7/2; //? In case they are both variables or something, we can Cast one of them to a double
    cout << "(double)7/2 Makes:\t " << Val1_2 << endl;

    int Val2 = (int)7.3; // ? Casted a double to an int
    cout << "(int)7.3 Makes:\t " << Val2 << endl;

    int Value3 = 9;
    Value3 += 1;
    cout << "\nAdding 1 to 9:\t " << Value3 << endl;
    Value3 /= 5;
    cout << "Dividing by 5:\t " << Value3 << endl;

    double equation = 5/3%2+2*6;
    cout << "\n5/3%2+2*6 Makes:\t " << equation << endl;

    double equation_bdms = ((5/3)%2)+(2*6); // Though both cases follow BODMAS, this is clearer
    cout << "(5/3)%2)+(2*6) Makes:\t " << equation_bdms << endl;

    return 0;
}