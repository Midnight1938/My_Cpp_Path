#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{
    Cat Kit; // ? Using cat conditions with cat named Kit
    Kit.madeHappy();
    cout << "Kit is Hapy, so it says: " << endl;    
    Kit.speak();
    cout << "\n" << endl;

    Cat Kat; // ? Using cat conditions with cat named Kat
    Kat.madeSad();
    cout << "Kat is Sad, so it says: " << endl;
    Kat.speak();

    return 0;
}