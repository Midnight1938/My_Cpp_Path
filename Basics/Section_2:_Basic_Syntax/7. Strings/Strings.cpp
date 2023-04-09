
#include <iostream>
using namespace std;

int main()
{
    string Hello_Youu = "\n Hello there How are you?";
    string text_thingy = "I am a sting, waaw";

    string Wonder = "Can we add stings I wonder...";
    string Wonder_Ans = "Absolutely";

    cout << text_thingy << endl;
    cout << Hello_Youu << endl;

    cout << Wonder + Wonder_Ans << endl;

    // ! [Cant] string Wonder_Ans = "Possibly Global?";
    // ! [Cant] cout << Wonder+Wonder_Ans << endl;
}