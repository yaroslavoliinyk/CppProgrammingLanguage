// Write a program that prints out the letters  ́a ́.. ́z ́ and the 
// digits  ́0 ́.. ́9 ́ and their integer values. Do the same for other 
// printable characters. Do the same again but use hexa- decimal notation.

#include <iostream>
using namespace std;

int main()
{
    for (int i = 'a'; i < 'z'; i++)
    {
        cout << char(i) << " = " << i << endl;
    }
    for (int i = '0'; i < '9'; i++)
    {
        cout << char(i) << " = " << i << endl;
    }
    for (int i = 'A'; i < 'Z'; i++)
    {
        cout << char(i) << " = " << i << endl;
    }
    // Hexadecimal notation
    cout << "Hexadecimal notation" << endl;
    for (int i = 'a'; i < 'z'; i++)
    {
        cout << char(i) << " = " << hex << i << endl;
    }
    for (int i = '0'; i < '9'; i++)
    {
        cout << char(i) << " = " << hex << i << endl;
    }
    for (int i = 'A'; i < 'Z'; i++)
    {
        cout << char(i) << " = " << hex << i << endl;
    }

}