#include <iostream>
using namespace std;

int main()
{
     int num_1 = 9;
     int num_2 = 3;

     cout << "Number 1 = " << num_1 << endl;
     cout << "Number 2 = " << num_2 << endl;

     cout << " Sum: " << num_1 + num_2 << endl;
     cout << " Subt: " << num_1 - num_2 << endl;
     cout << " Mult: " << num_1 * num_2 << endl;
     cout << " Div: " << num_1 / num_2 << "\n"
          << endl;

     num_1 = num_1 + 1;
     num_2 = num_2 - 2;

     cout << "Number 1 = " << num_1 << endl;
     cout << "Number 2 = " << num_2 << endl;

     cout << " New Sum: " << num_1 + num_2 << endl;
     cout << " New Subt: " << num_1 - num_2 << endl;
     cout << " New Mult: " << num_1 * num_2 << endl;
     cout << " New Div: " << num_1 / num_2 << "\n" << endl;
}