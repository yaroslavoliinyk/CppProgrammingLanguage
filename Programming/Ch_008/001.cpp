/*
    Write a doublylinked list of s t r i n g module in the style of the S t a c k module from §2.4.
Exercise it by creating a list of names of programming languages. Provide a s o r t () function
for that list, and provide a function that reverses the order of the strings in it.

*/

#include <iostream>

using namespace std;

struct Node{
    string item;
    // Node* next = 0;
    // Node* previous = 0;

    Node(string itm){ this->item = itm; }
};

// Interface
namespace DoubleLinkedList{

    void push_first(string);
    string pop_first();
    void push_last(string);
    string pop_last();

}

// Implementation
namespace DoubleLinkedList{

    const int max_size = 400;

    Node* next;
    Node* prev;

    void push_first(string itm)
    {
        initial->next = initial;
        initial = new Node(itm);
    }

    string pop_first()
    {
        string popped = current->item;
        current = next;
        return popped;
    }
}

int main()
{
    cout << "Working" << endl;
}