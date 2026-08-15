#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* createNode(int value) {
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

int main(){

    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    return 0;
}