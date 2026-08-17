#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

int main()
{
    Node *root, *left, *right;

    root = new Node;
    left = new Node;
    right = new Node;

    cout << "Enter root value: ";
    cin >> root->data;

    cout << "Enter left value: ";
    cin >> left->data;

    cout << "Enter right value: ";
    cin >> right->data;

    root->left = left;
    root->right = right;

    left->left = NULL;
    left->right = NULL;

    right->left = NULL;
    right->right = NULL;

    cout << "\nTree:\n";
    cout << "Root = " << root->data << endl;
    cout << "Left = " << root->left->data << endl;
    cout << "Right = " << root->right->data << endl;

    return 0;
}