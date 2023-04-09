#include <iostream>
#include <sstream> // To let us fix the 2 var adding

using namespace std;

int main()
{
    string Name = "Skshm";
    int Age = 17;

    /*
*    string info = "Name: " + Name + "\t Age: " + Age;

!! Cant do this
!! Cant concatenate an int and a string on the fly

*    cout << info << endl;
*/

    stringstream ss;

    ss << "Name: ";
    ss << Name;
    ss << "\tAge: ";
    ss << Age;

    string info = ss.str();

    cout << info << endl;

    return 0;
}