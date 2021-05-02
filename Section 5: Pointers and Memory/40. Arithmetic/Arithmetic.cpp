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
    cout << Val1 << endl;

    double Val1_1 = 7.0/2; //? One of them needs to be a float to use the remainder
    cout << Val1_1 << endl;
    
    double Val1_2 = (double)7/2; //? In case they are both variables or something, we can Cast one of them to a double
    cout << Val1_2 << endl;

    int Val2 = (int)7.3; // ? Casted a double to an int
    cout << Val2 << endl;

    int Value3 = 9;
    Value3 += 1;
    cout << Value3 << endl;
    Value3 /= 5;
    cout << Value3 << endl;

    double equation = 5/3%2+2*6;
    cout << equation << endl;

    double equation_bdms = ((5/3)%2)+(2*6); // Though both cases follow BODMAS, this is clearer
    cout << equation_bdms << endl;

    return 0;
}