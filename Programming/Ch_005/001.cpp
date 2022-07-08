#include <iostream>
using namespace std;


int main()
{
    // 1. a pointer to a character
    char a = 'A';
    char* ap = &a;
    // 2. an array of 10 integers
    int grades[10] = {1,2,3,4,5,6,7,8,9,10};
    // 3. a reference to an array of 10 integers
    int (&gradesr)[10] = grades;
    cout<<gradesr<<endl;
    cout<<sizeof(gradesr)<<endl;
    // 4. a pointer to an array of character strings
    string surnames[] = {"Oliinyk", "Gisman", "Ulman"};
    string* surnamesp = &surnames[0];
    cout << (*surnamesp) << endl;
    surnamesp++;
    cout << (*surnamesp) << endl;
    // 4.1. Version in book
    string (*pas)[10] = 0;
    cout<<pas<<endl;
    cout<<sizeof(pas)<<endl;
    // 5. a pointer to a pointer to a character
    char** c = &ap;
    cout << c << endl;
    // 6. a constant integer
    const int i = 10;
    cout << i << endl;
    cout << sizeof(i) << endl;
    // 7. a pointer to a constant integer
    int const *pic = 0;
    cout << pic << endl;
    cout << sizeof(pic) << endl;
    // 8. constant pointer to an integer
    int *const pci = 0;
    cout << pci << endl;
    cout << sizeof(pci) << endl;

}