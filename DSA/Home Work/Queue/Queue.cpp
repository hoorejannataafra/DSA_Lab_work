#include <iostream>
using namespace std;

struct Queue {
    int arr[5];
    int size;
};
void enqueue(Queue &q, int value) {
    if (q.size == 5) {
        cout << "Queue Overflow" << endl;
        return;
    }
    q.arr[q.size] = value;
    q.size++;
}
void dequeue(Queue &q) {
    if (q.size == 0) {
        cout << "Queue Underflow" << endl;
        return;
    }
    for (int i = 0; i < q.size - 1; i++) 
    {
        q.arr[i] = q.arr[i + 1];
    }
    q.size--;
}
void show(Queue &q) 
{
    if (q.size == 0){
        cout << "Queue Empty" << endl;
        return;
    }
    for (int i = 0; i < q.size; i++){
        cout << q.arr[i] << " ";
    }
}
int main() {
    Queue q;
    q.size = 0;

    enqueue(q, 5);
    enqueue(q, 6);
    enqueue(q, 7);
    enqueue(q, 8);
    enqueue(q, 9);

    dequeue(q);

    enqueue(q, 10);

    show(q);

    return 0;
}