#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data)
{
    Node *newNode = new Node;

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
// In order Traversal 
void inorder(Node *root)
{
    if (root != NULL){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Preorder traversal
void preorder(Node *root)
{
    if (root!= NULL){
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder traversal
void postorder(Node *root)
{
    if (root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    int a,b,c;

    cout << "Enter root: ";
    cin >> a;

    cout << "Enter left: ";
    cin >> b;

    cout << "Enter right: ";
    cin >> c;

    Node *root = createNode(a);

    root->left = createNode(b);
    root->right = createNode(c);

    cout << "Inorder: ";
    inorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    return 0;
}