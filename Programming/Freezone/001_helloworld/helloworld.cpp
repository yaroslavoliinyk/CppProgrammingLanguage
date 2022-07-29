#include <iostream>
#include <stdio.h>

using namespace std;

void printK(int* k)
{
    cout << *k << endl;
}

int main()
{
    // std::cut << "Hello World" << std::endl;
    // cout <<"LOL"<<endl;
    // cout<<sizeof(char*)<< endl;

    // int i = 1;
    // int v[10];
    // v[i] = i++;
    // cout << v[i] << " " << i << endl;

    // printf("My name is%s%s\n","EL", "KRAVCHUK");
    // int a = 1;
    // cout << ++a-- << endl;

    // char s = '/**/';
    // cout << s << endl;

    // int k = 3;
    // printK(&k);

    // double* t[2];
  
    // *(t[0]) = 3;
    typedef double TwoDoubleArr[2];
    TwoDoubleArr* pda = new TwoDoubleArr[1000];
    (*pda)[0] = 3;

    cout << (*pda)[0] <<endl;

}

