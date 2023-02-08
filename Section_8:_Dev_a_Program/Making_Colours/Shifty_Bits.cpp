#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    //* Predefined Hex vlues of colours

    unsigned char alpha = 0xFF;
    unsigned char red = 0x12;
    unsigned char green = 0x34;
    unsigned char blue = 0x56;

    unsigned int colour = 0;

    colour += alpha;
    colour <<= 8; //* Shift colour left by 8 bits
    colour += red;
    colour <<= 8;
    colour += green;
    colour <<= 8;
    colour += blue;

    cout << setfill('0') << setw(8) << hex << colour << endl; //? set blanks to 0, 8 chars, hex of colour we have here

    return 0;
}