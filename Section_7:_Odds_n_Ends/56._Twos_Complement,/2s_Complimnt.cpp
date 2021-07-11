#include <iostream>

using namespace std;

/*
* We look at how integers are represented in the programs memory
? Nagative happens because of an overflow
*/

int main()
{
    char valuu = 127; // Max val
    
    cout << "Max value of a char is: \t " <<(int)valuu << endl;

    valuu++; //! +1 to a max value
    cout << "We added 1 to that and got:\t" << (int)valuu << "\n\nWhich is the smallest value of a char"<< endl;

    return 0;
}