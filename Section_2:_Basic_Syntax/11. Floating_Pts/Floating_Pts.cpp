#include <iostream>
#include <iomanip> // InputOutput manipulation

using namespace std;

int main()
{
     float Deciml = 420.69696969;
     // Its a decimal value! OhMiGosh

     cout << "Size of float: " << sizeof(float) << endl;
     cout << "\n"
          << fixed //that used the manip
          << Deciml << endl;
     // Cuz its a fixed size memory so used 2 in the end

     int Mess_Precision = 15; //try messing with it

     cout << "\nSets fixed number of end decimal stuff: \n"
          << setprecision(Mess_Precision)
          << fixed //that used the manip
          << Deciml << endl;

     double dvalue = 420.69696969; //makes stuff more precise

     cout << "\nSets precise number of end decimal stuff: \n"
          << setprecision(Mess_Precision)
          << fixed //that used the manip
          << dvalue << "\nSize of double value: "
          << sizeof(double) << endl;

     long double lvalue = 420.69696969; //makes stuff more precise

     cout << "\nSets more precise number of end decimal stuff: \n"
          << setprecision(Mess_Precision)
          << fixed //that used the manip
          << lvalue << "\nSize of long double: "
          << sizeof(long double) << endl;

     return 0;
}