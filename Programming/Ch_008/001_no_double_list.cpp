#include <iostream>
using namespace std;

namespace MyList
{
    class Node{
        public:
            Node* next = 0;
            string item;
            Node(string itm)
            {
                this->item = itm;
            }
       
    };

    class LinkedList{
        public:
            void push(string itm)
            {
                if(!first)
                    first = new Node(itm);
                else
                {
                    Node* n = first;
                    while(n->next)
                        n = n->next;
                    
                    Node* new_node = new Node(itm);
                    n->next = new_node; 
                }
            }

            string pop()
            {
                Node* n = first;
                Node* prev = 0;
                if(!first) throw out_of_range("Empty list.");

                while (n->next)
                {
                    prev = n;
                    n = n->next;
                }
                string last_itm = n->item;
                if (prev)  
                    prev->next = 0; 
                else
                    first = 0;

                return last_itm;
            }

            void printList()
            {
                Node* n = first;
                while(n)
                {
                    cout << n->item << endl;
                    n = n->next;
                }
            }

        private:
            Node* first = 0;

    };

}

int main()
{
    using namespace MyList;
    LinkedList l = LinkedList();
    l.push("lol");
    l.push("kek");
    l.push("Cheburek");

    cout << "Here" << endl;
    // cout << l.pop() << endl;
    // cout << l.pop() << endl;
    // cout << l.pop() << endl;
    l.printList();



}