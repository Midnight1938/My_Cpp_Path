#include <iostream>

using namespace std;
// ASCII table at: https://www.ascii-code.com/

int main()
{
     bool bVal = true; // For true and false
     cout << "\nBoolean Value is: " << bVal << endl;

     char cVal = 35; // Will print ASCII value
     cout << "\nASCII value for " << int(cVal)
          << " is: " << cVal << "\nWith Size: " << sizeof(cVal) << endl;
     char cVale = '#';
     // printing as int gives the actual thing
     cout << "\nASCII value of " << cVale
          << " is: " << int(cVale) << "\nWith Size: " << sizeof(cVale) << endl;

     wchar_t wVal = '#';                       //Stores more than char and instant convert so
     cout << "\nASCII value of " << char(wVal) //using char make it char type again
          << " is: " << wVal << "\nWith Size: " << sizeof(wVal) << endl;

     return 0;
}