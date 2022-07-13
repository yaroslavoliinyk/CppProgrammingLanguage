#include <iostream>
using namespace std;

int main()
{
    
    // 1
    int bb = 100;
    int cc = 222;
    int dd = 333;
    int a1 = bb + cc * dd << 2 & 8;
    // ! WRONG
    int a2 = (bb + (((cc * dd) << 2) & 8));
    // ! WRONG
    int a3 = bb + (cc * ((dd << 2) & 8));
    // ! WRONG
    int a4 = bb + ((cc * (dd << 2)) & 8);
    // ! WRONG
    int a5 = bb + (cc * (dd << (2 & 8)));
    // CORRECT
    int a6 = (((bb + (cc * dd)) << 2) & 8);
    // I was baffled by the correct answer beneath.
    // A link to Operator recedence rules: https://www.programiz.com/cpp-programming/operators-precedence-associativity#:~:text=C%2B%2B%20Operators%20Precedence,have%20their%20operations%20evaluated%20first.
    cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << endl;
    
    // 2
    int a = 5;
    int r1 = a & 077 != 3;
    // ! WRONG
    int r2 = ((a & 077) != 3);
    // CORRECT
    int r3 = (a & (077 != 3));
    cout <<  r1 << " " << r2 << " " << r3 << endl;

    // aa == bb || aa == cc && cc < 55
    // cc = xx != 00
    // 00 <= ii < 77
    // ff(11,22)+33
    // aa = - 11 + + bb -- - 55
    // aa = bb == cc ++
    // aa = bb = cc = 00
    // aa[44][22] *= * bb ? cc : * dd * 22
    // aa-bb,cc=dd
}
