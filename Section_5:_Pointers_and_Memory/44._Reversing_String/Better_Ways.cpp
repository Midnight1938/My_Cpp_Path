#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
* A way to reverse a string that isnt an array, with homebrew and with module
*/

void revStr(string &strg)
{
    string Revver;

    for (int i = strg.length() - 1; i >= 0; i--)
    {
        Revver += strg[i];
    }
    cout << Revver << endl;
}

int main()
{
    string str = "Hewoo";

    //? Without the module
    revStr(str);

    //? Reverse str[begin..end]
    reverse(str.begin(), str.end());
    cout << str << endl;

    return 0;
}