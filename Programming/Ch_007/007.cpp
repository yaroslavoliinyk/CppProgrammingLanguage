#include <iostream>
#include <vector>
#include <list>
using namespace std;

struct Tnode{
    string word;
    int count; 
    Tnode* left = 0;
    Tnode* right = 0;
};
list<string> words;


// Write a function to write out a tree of Tnodes
void printTree(const Tnode &mainNode, int level)
{
    char* pillar = "|\n";
    if (mainNode.left) { printTree(*(mainNode.left), level + 1); }
    if (mainNode.right) { printTree(*(mainNode.right), level + 1); }
    words.push_back(mainNode.word);
    return;
}

typedef int CMP_F(const void*, const void*);

// Write a function to write out a tree of Tnodes with the words in alphabetical order.
void printOrderTree()
{
    words.sort();
    for (string word : words)
    {
        std::cout << word <<endl;
    }
}

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

    printTree(n, 0);
    printOrderTree();

}