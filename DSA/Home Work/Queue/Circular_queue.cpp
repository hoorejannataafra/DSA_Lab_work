#include <iostream>
using namespace std;

struct Queue {
    int arr[5];
    int front;
    int rear;
    int size;
};

void enqueue(Queue &q, int value) {
    if (q.size == 5) {
        cout << "Queue Overflow\n";
        return;
    }
    q.rear = (q.rear + 1) % 5;
    q.arr[q.rear] = value;
    q.size++;
}

void dequeue(Queue &q){
    if (q.size == 0) {
        cout << "Queue Underflow\n";
        return;
    }
    q.front = (q.front + 1)%5;
    q.size--;
}

void show(Queue &q){
    if(q.size == 0){
        cout << "Queue is empty\n";
        return;
    }
    int index = q.front;
    for (int i = 0;i<q.size;i++){
        cout << q.arr[index] << " ";
        index = (index + 1) % 5;
    }
    cout << endl;
}

int main(){
    Queue q;

    q.front = 0;
    q.rear = -1;
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