// 7. (∗2) Draw a graph of the integer and fundamental types where
// a type points to another type if all values of the first can be 
// represented as values of the second on every standards-conforming 
// implementation. Draw the same graph for the types on your favorite 
// implementation.

#include <iostream>
using namespace std;

int main()
{
    long double e = 'a';
    cout << e << endl;
    cout << sizeof(e) << endl;

    char x = 100ul;
    cout << x << endl;
}