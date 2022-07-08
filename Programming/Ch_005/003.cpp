#include <iostream>
using namespace std;

int main()
{
    typedef unsigned char UnsigChar;
    UnsigChar uc = 30;
    cout << uc << endl;
    typedef const unsigned char CUnsigChar;
    typedef int* IntP;
    typedef char** PPChar;
    typedef char CharArray[3];
    CharArray beginning = {'a', '2', 3};
    cout << char(beginning[0]) << char(beginning[1]) << char(beginning[2]) << endl;

    typedef CharArray ArrayOfCharArrays[];
    ArrayOfCharArrays* paca = 0;
    cout << paca << endl;

    // array of 7 pointers to int
    typedef int* PointerInt;
    typedef PointerInt SevenPointersInt[7];
    SevenPointersInt s;

    // pointer to an array of 7 pointers to int
    SevenPointersInt* ps;

    // array of 8 arrays of 7 pointers to int
    SevenPointersInt sarr[8];
}