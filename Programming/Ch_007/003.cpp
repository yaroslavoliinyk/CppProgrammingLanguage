#include<iostream>

using namespace std;

const char* Null_cp = 0;

int main(int argc, char* argv[])
{
    // cout << argc << endl;
    // cout << "Hello, " << argv[1] << endl;

    for (int i = 0; i < argc - 1; ++i)
    {
        cout << "Hello, " << argv[i + 1] << "!" <<endl;
    }

}