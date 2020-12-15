// * Outputting text trying stuff
#include <iostream>

using namespace std;

int main()
{
    cout << "Use \"\" things to write" << endl;
    cout << "Alright. Look new line: \n"
         << endl;
    cout << "No endline?" << flush;
    cout << " No problem...\n"
         << "NEWLINE" << flush;
    cout << "Just use flush" << endl;

    cout << "Even this seems valid";
    cout << "But baddd " << endl;

    cout << "Force Space"
         << " "
         << "Not forced"
         << "No Spacing! OMG" << endl;
    cout << "\nWhats 2+2 you ask? Well its " << 2 + 2 << endl;

    return 0;
}