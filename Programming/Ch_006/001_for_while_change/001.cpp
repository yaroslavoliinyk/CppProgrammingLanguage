
#include <iostream>
using namespace std;

int main()
{
    char* s = "How are you? Good?";
    int i;
    int max_length = strlen(s);
    char* input_line = s;
    int quest_count = 0;

    for (i=0; i<max_length; i++)
        if (input_line[i] == '?')
            quest_count++;
    cout << quest_count << endl;

    // Rewrite to equivalent while statement
    i = 0;
    quest_count = 0;
    while(i < max_length)
        if (input_line[i++] == '?')
            quest_count++;
    cout << quest_count << endl;

    // Rewrite it to use a pointer as the controlled variable, that is, so that the test is of the form *pp== ́? ́
    quest_count = 0;
    while (*input_line)
        if(*input_line++ == '?')
            quest_count++;
    cout << quest_count << endl;
}