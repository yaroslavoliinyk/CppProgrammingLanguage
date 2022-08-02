#include <iostream>
using namespace std;

namespace MyList
{
    class Node{
        public:
            Node* next = 0;
            Node* prev = 0;
            string item;

        Node(string itm) { this->item = itm; }
  
    };

    class DoubleLinkedList{
        Node* n;

        void push_front(string itm)
        {
           
        }

        string pop_front()
        {
            
            return "";
        }

        void push_back(string itm)
        {
            Node* n_node = new Node(itm);
            n_node->next = n;
            n->prev = n_node;
            n = n_node;
        }

        string pop_back()
        {
            return "";
        }

    };
}

int main()
{

}