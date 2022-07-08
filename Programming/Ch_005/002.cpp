#include<iostream>
using namespace std;

int main()
{
    char a = 'A';
    char b = 'B';
    char n = '5';
    char* pa = &a;
    char* pb = &b;
    char* pn = &n;
    cout << pa << "  " << pb << "  " << pn << endl;
    cout << sizeof(pa) << endl;



    int i = 10;
    int j = 10;
    int k = 100;
    int* pi = &i;
    int* pj = &j;
    int* pk = &k;
    cout << pi << " " << pj <<  " " << pk << endl;
    cout << sizeof(pi) << endl;

}