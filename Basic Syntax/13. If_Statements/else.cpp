#include <iostream>

using namespace std;

int main()
{
    cout << "Enter emeny name: " << flush;
    string Enemy;
    cin >> Enemy;

    cout << "\nWhen do you want to kill " << Enemy << endl;

    cout << "1.\tToday." << endl;
    cout << "2.\t1 day later." << endl;
    cout << "3.\t1 week later." << endl;
    cout << "4.\t1 month later." << endl;
    cout << "5.\t1 year later." << endl;
    cout << "6.\t5 years later." << endl;
    
    cout << "Choose the time you want to prepare for it: " << flush;
    int Dura;
    cin >> Dura;

    if(Dura == 6){cout << "\nAlright 5 years lets do this" << endl;}
    if(Dura == 5){cout << "\nAlright 1 year lets do this" << endl;}
    if(Dura == 4){cout << "\nAlright 1 month lets do this" << endl;}
    else{cout << "Youre not strong enough.\nMentally or physically \nYET" << endl;}

    return 0;
}