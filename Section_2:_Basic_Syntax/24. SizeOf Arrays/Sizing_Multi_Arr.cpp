#include <iostream>
using namespace std;

int main()
{

    string Aminals[][3] = {
        {"Fox", "Wolf", "Octopus"},
        {"Ferret", "Husky", "Dumbo"}};

    cout << "\n What we are using: \n"
         << "\nSize Of Aminal Array:\t\t " << sizeof(Aminals)
         << "\nSize Of Aminal Array at 0:\t " << sizeof(Aminals[0])
         << "\nSize Of string:\t\t\t " << sizeof(string)
         << "\n\nArray:" << endl;

    for (unsigned int i = 0; i < sizeof(Aminals) / sizeof(Aminals[0]); i++)
    {
        for (unsigned int j = 0; j < sizeof(Aminals[0]) / sizeof(string); j++)
        {
            cout << Aminals[i][j] << "\t " << flush;
        }

        cout << endl;
    }

    return 0;
}