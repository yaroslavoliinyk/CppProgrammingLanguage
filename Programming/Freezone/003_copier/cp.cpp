#include <iostream>

template<class In,class Out>void copy(In from,In too_far,Out to) 
{
    while (from != too_far) 
    {
        *to = *from; // copy element pointed to ++to; // next input
        ++from; // next output
    } 
}



char vc1[200];
char vc2[500];

void f()
{
    copy(&vc1[0], &vc1[200], &vc2[0]);
}

int main()
{
    vc1[0] = 'L';
    vc1[1] = 'O';
    vc1[2] = 'L';
    vc1[3] = '\0';
    
    std::cout << "vc1" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << vc1[i] << std::endl;
    }

    std::cout << "vc2" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << vc2[i] << std::endl;
    }

    f();

    std::cout << "vc2 after copy" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << vc2[i] << std::endl;
    }
}
