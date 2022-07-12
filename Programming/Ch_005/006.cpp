#include <iostream>
using namespace std;

void f(char c)
{
    cout << "f(char c)" << c << endl;
}

void g(char& c)
{
    cout << "g(char c)" << c << endl;
}

void h(const char c)
{
    cout << "h(char c)" << c << endl;
}

int main()
{
    //  ́a ́, 49, 3300, c, uc, and sc, where c is a char, uc 
    // is an unsigned char and sc is a signed char.
    char c = 'q';
    unsigned char uc = '2';
    signed char sc = '3';
    // Call them with the arguments
    //  ́a ́, 49, 3300, c, uc, and sc, where c is a char, uc is an unsigned char, and sc is a signed char.
    f('a'); // +
    f(49);  // +
    f(3300); // + warn
    f(c); // +
    f(uc); // +
    f(sc); // +
    
    // g('a'); // +
    // g(49);  // +
    // g(3300); // err
    // g(c); // +
    // g(uc); // err
    // g(sc); // +

    h('a'); // +
    h(49);  // +
    h(3300); // + warn
    h(c); // +
    h(uc); // +
    h(sc); // +
}