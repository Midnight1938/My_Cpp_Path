#include <iostream>

using namespace std;

/*
* & does 'And' bitwise comparisons
TODO: Lookup Bitwise operators in Cpp
? How:
* 
* * Colour: 100011011100011110110011
* * Mask:   111111110000000000000000
* * Result: 100011010000000000000000
* Hex
* * Colour: 123456
* * Mask:   ff0000
* * Result: 120000
*/

int main()
{
    int colour = 0x123456; //* Red,Green,Blue

    unsigned char red = (colour & 0xFF0000) >> 16; //? Shinfting 2 bytes (16 bits) to get red
    unsigned char green = (colour & 0x00FF00) >> 8;//? Shinfting 1 Byte to get green
    unsigned char blue = colour & 0x0000FF;

    cout << hex << colour << endl;
    cout << hex << (int)red << endl;
    cout << hex << (int)green << endl;
    cout << hex << (int)blue << endl;

    //* Alternate Method
    unsigned char redAgain = (colour) >> 16; //? Shinfting 2 bytes (16 bits) to get red
    unsigned char greenAgain = (colour) >> 8;//? Shinfting 1 Byte to get green
    unsigned char blueAgain = colour ;
    cout << "\nOther Method" << endl;
    cout << hex << (int)redAgain << endl;
    cout << hex << (int)greenAgain << endl;
    cout << hex << (int)blueAgain << endl;


    return 0;
}