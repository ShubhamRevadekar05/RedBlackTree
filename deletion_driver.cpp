#include <iostream>
#include "include/redblacktree"

using namespace std;

int main()
{
    Node<int>* t = new Node<int>(50, Node<int>::Black);
    t->setLeft(new Node<int>(30, Node<int>::Black));
    t->getLeft()->setParent(t);
    t->setRight(new Node<int>(65, Node<int>::Black));
    t->getRight()->setParent(t);
    t->getLeft()->setLeft(new Node<int>(15, Node<int>::Black));
    t->getLeft()->getLeft()->setParent(t->getLeft());
    t->getLeft()->setRight(new Node<int>(35, Node<int>::Black));
    t->getLeft()->getRight()->setParent(t->getLeft());
    t->getRight()->setLeft(new Node<int>(55, Node<int>::Black));
    t->getRight()->getLeft()->setParent(t->getRight());
    t->getRight()->setRight(new Node<int>(70, Node<int>::Red));
    t->getRight()->getRight()->setParent(t->getRight());
    t->getRight()->getRight()->setLeft(new Node<int>(68, Node<int>::Black));
    t->getRight()->getRight()->getLeft()->setParent(t->getRight()->getRight());
    t->getRight()->getRight()->setRight(new Node<int>(80, Node<int>::Black));
    t->getRight()->getRight()->getRight()->setParent(t->getRight()->getRight());
    t->getRight()->getRight()->getRight()->setRight(new Node<int>(90, Node<int>::Red));
    t->getRight()->getRight()->getRight()->getRight()->setParent(t->getRight()->getRight()->getRight());
    RedBlackTree<int> tree(t);
    cout << "Our tree at the beginning: " << endl;
    cout << "Inorder traversal: ";
    tree.print();
    cout << endl;
    cout << "Preorder traversal: ";
    tree.print(RedBlackTree<int>::Preorder);
    cout << endl;
    int arr[] = {55, 30, 90, 80, 50, 35, 15, 65, 68, 70};
    for(int i=0; i<10; i++)
    {
        cout << "After deleting " << arr[i] << "- " << endl;
        tree.deleteNode(arr[i]);
        tree.print();
        cout << endl;
        tree.print(RedBlackTree<int>::Preorder);
        cout << "\n------------------------------------------" << endl;
    }
    return 0;
}