// Write a program that strips comments out of a C++ program. That is, read from cciinn,
// remove both // comments and /* */ comments, and write the result to ccoouutt. Do not worry
// about making the layout of the output look nice (that would be another, and much harder, exer-
// cise). Do not worry about incorrect programs. Beware of //, /*, and */ in comments, strings,
// and character constants

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

typedef int IntArr[2];

void writeTillEnter(IntArr* tat, int* c_num, int* i, string code)
{
    // Put start index from first '/'
    (*(tat + *c_num))[0] = *i - 1;
    // Find index of eol and put as end index to tat array
    int found = code.find_first_of('\n', *i + 1);
    (*(tat + *c_num))[1] = found;
    // Assign i new value after '\n'
    *i = found + 1;
    // Increment number of comments
    (*c_num)++;
}

void writeTillClosed(IntArr* tat, int* c_num, int* i, string code)
{
     // Put start index from first '/'
    (*(tat + *c_num))[0] = *i - 1;
    int found = *i + 1;
    while(*i < code.size())
    {
        found = code.find_first_of('*', *i + 1);
        if (code[found + 1] == '/')
            break;
        *i = found + 1;
    }
    (*(tat + *c_num))[1] = found + 1;
    *i = found + 2;

    (*c_num)++;
}

int findNextChar(int i, char c, string code)
{
    int found = code.find_first_of(c, i + 1);
    return found;
}

int main()
{
    string code;
    getline(std::cin, code, '$');
  
    // An array that stores indexes 'From', 'To' which str will be truncated.
    IntArr* trunc_at = new IntArr[1000];
    // Number of found commentaries
    int c_num = 0;
    int i = 0;
    
    for (i = 0; i < code.size() && code[i] != '$'; i++)
    {
        if(code[i] == '/')
        {
            // We can catch exceptions if i >= code size.
            if(code[i+1] == '/')
            {
                ++i;
                // Make a function to assign to trunc_at indexes until '/n'
                writeTillEnter(trunc_at, &c_num, &i, code);
            }
            else if(code[i+1] == '*')
            {
                ++i;
                // Make a function to assign to trunc_at indexes until not found "*/"
                writeTillClosed(trunc_at, &c_num, &i, code);
            }

        }
        if(code[i] == '"' || code[i] == '\'')
        {
            // Omit charactern until next same element found.
            i = findNextChar(i, code[i], code) + 1;
        }
    }

    // char* no_comments_code = new char[4000];
    string no_comments_code = ""; 
    int end_prev_i = 0;
    for (int i = 0; i < c_num; ++i)
    {
        int start_i = (*(trunc_at + i))[0];
        if (i != 0)
        {
            end_prev_i = (*(trunc_at + i - 1))[1];
        }
        for (int j = end_prev_i; j < start_i; ++j)
        {
            char c = code[j];
            no_comments_code += c;
            //*(no_comments_code + j) = c;
        }
    }

    cout << "Code without comments\n" << no_comments_code << endl;
}
