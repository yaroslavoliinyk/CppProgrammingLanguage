#include <iostream>
using namespace std;

int main()
{
    char s[] = "a short string";
    // 15(yes trailing \0 at the end)
    cout << sizeof(s) << endl;

    // 15*4(yes trailing \0 at the end)
    string s1 = "a shoft string";
    cout << sizeof(s1) << endl;

    string one = "1";
    cout << sizeof(one) << endl;

    string big = "Write declarations for the following: a pointer to a character, an array of 10 integers, a ref- erence to an array of 10 integers, a pointer to an array of character strings, a pointer to a pointer to a character, a constant integer, a pointer to a constant integer, and a constant pointer to an integer. Initialize each one.";
    cout << sizeof(big) << endl;
    cout << sizeof(big[20]) << endl;
}