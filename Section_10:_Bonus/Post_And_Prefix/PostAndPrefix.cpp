#include <iostream>

using namespace std;

int main(){
    int Val = 8;
    int Num = 12;

    cout << "\nAddition of:\t" << Val << endl;
    cout << "With postfix:\t" << Val++ << endl;
    cout << "Current Val:\t" << Val << endl;
    cout << "With Prefix:\t" << ++Val << endl;
    cout << "Current Val:\t" << Val << endl;

    cout << "\nSubtraction of:\t" << Num << endl;
    cout << "With postfix:\t" << Num-- << endl;
    cout << "Current Num:\t" << Num << endl;
    cout << "With Prefix:\t" << --Num << endl;
    cout << "Current Num:\t" << Num << endl;

    return 0;
}
