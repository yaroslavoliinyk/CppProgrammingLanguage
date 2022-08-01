#include <iostream>

using namespace std;

// 1. A function taking arguments of type pointer to 
// character and reference to integer and returning no value
void f1(char *, int&);

// 2. A pointer to such a function
typedef void (*PF1)(char*, int&);
PF1 pf1;

// 3. A function taking such a pointer as an argument
void f3(PF1 f);

// 4. And a function returning such a pointer
PF1 f4();

// 5. Write the definition of a function that takes such 
// a pointer as an argument and returns its argument as the return value.
PF1 f5(PF1 pf){ return pf; }

int main()
{
    // PF1 a = &f1;
    cout << "Complete!" << endl;
}