#include <iostream>
using namespace std;

struct Tnode{
    string word;
    int count; 
    Tnode* left = 0;
    Tnode* right = 0;
};

// Write a function to write out a tree of Tnodes
void printTree(const Tnode &mainNode, int level)
{
    char* pillar = "|\n";
    if (mainNode.left) { printTree();}
}
// Write a function to write out a tree of Tnodes with the words in alphabetical order.

int main()
{
    Tnode n;
    n.word = "Yarek";
    n.count = 15;

    Tnode n_l;
    Tnode n_r;
    n.left = &n_l;
    n.right = &n_r;

    n_l.word = "Kuklo";
    n_l.count = 4;

    n_r.word = "HeyHey";
    n_r.count = 44;

    Tnode n_l_l;
    Tnode n_l_r;
    n_l.left = &n_l_l;
    n_l.right = &n_l_r;

    n_l_l.word = "Sternenko";
    n_l_l.count = 27;
    n_l_r.word = "Usyk";
    n_l_r.count = 39;

}