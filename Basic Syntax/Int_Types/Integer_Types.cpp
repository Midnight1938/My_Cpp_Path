
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    //Thats the max length it lets me go!

    cout << "\n The values we can have is: \n"
         << "Bits    Max                 Min \n"
         << "64 Bit: " << INT64_MAX << " " << INT64_MIN << "\n"
         << "32 Bit: " << INT32_MAX << "          " << INT32_MIN << "\n"
         << "16 Bit: " << INT16_MAX << "               " << INT16_MIN << "\n"
         << "8  Bit: " << INT8_MAX << "                 " << INT8_MIN << "\n"
         << endl;

    short int val1 = 32767; // !! We specified 16 bit
    cout << "Variable with 16 bit storage: " << val1 << endl;
    int val2 = -2147483648; // !! Its using 32 bit usually
    cout << "Variable with 32 bit storage: " << val2 << endl;
    // typing int isnt really important (usually)
    long val3 = 9223372036854775807; // !! We specified 64
    cout << "Variable with 64 bit storage: " << val3 << endl;

    cout << "\nWe can check the size used by default int, its: " << sizeof(int) << endl;
    cout << "We can check the size used by any other int (short here): " << sizeof(short int) << endl;

    unsigned PosVal = 2147483648;
    cout << "\nPositive val only with unsigned: " << PosVal << endl;

    return 0;
}