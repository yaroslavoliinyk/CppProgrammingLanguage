#include <stdio.h>

int my_f(){ return 1;}

int main()
{
    const int i = my_f();
    extern const int c4;
    printf("My name is %s %s %d\n", "2", "2", i);
    
}