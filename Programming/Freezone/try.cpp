#include <iostream>

using namespace std;

struct Tnode{
    string word;
    int count; 
    Tnode* left = 0;
    Tnode* right = 0;
};

int main()
{
    Tnode t1;
    cout << t1.left << endl;
    cout << t1.right << endl;

    Tnode t2;
    cout << t2.left << endl;
    cout << t2.right << endl;
}