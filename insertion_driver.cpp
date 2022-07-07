#include <iostream>
#include "include/redblacktree"

using namespace std;

int main()
{
    RedBlackTree<int> tree;
    int arr[] = {70, 23, 15, 48, 65, 80, 100, 42, 13, 75};
    for(int i=0; i<10; i++)
    {
        tree.insertNode(arr[i]);
    }
    cout << "Inorder traversal: ";
    tree.print();
    cout << endl;
    cout << "Preorder traversal: ";
    tree.print(RedBlackTree<int>::Preorder);
    cout << endl;
    return 0;
}