// What, on your system, are the largest and the smallest 
// values of the following types: char, short, int, long, 
// float, double, long double, and unsigned.

#include <iostream>

using namespace std;

int main()
{
    cout << "char\n";
    cout << "smallest: " <<  - pow(2, sizeof(char)*8 - 1) << endl;
    cout << "largest: " << pow(2, sizeof(char)*8 - 1) - 1 << endl;

    cout << "short\n";
    cout << "smallest: " <<  - pow(2, sizeof(short)*8 - 1) << endl;
    cout << "largest: " << pow(2, sizeof(short)*8 - 1) - 1 << endl;

    cout << "int\n";
    cout << "smallest: " <<  - pow(2, sizeof(int)*8 - 1) << endl;
    cout << "largest: " << pow(2, sizeof(int)*8 - 1) - 1 << endl;

    cout << "long\n";
    cout << "smallest: " <<  - pow(2, sizeof(long)*8 - 1) << endl;
    cout << "largest: " << pow(2, sizeof(long)*8 - 1) - 1 << endl;

    cout << "float\n";

}