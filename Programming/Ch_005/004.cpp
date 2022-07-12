#include <iostream>
using namespace std;


void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int& a, int& b)
{
    int* ap = &a;
    int* bp = &b;
    int temp = *ap;
    *ap = *bp;
    *bp = temp;
}

void swap3(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 9;
    cout << x << " " << y << endl;
    swap3(x, y);
    cout << x << " " << y << endl;


}