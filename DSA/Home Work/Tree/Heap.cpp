#include <iostream>
using namespace std;

struct Heap
{
    int *arr;
    int size;
    int capacity;
};
Heap* create(int capacity)
{
    Heap *h = new Heap;
    h->capacity = capacity;
    h->size = 0;
    h->arr = new int[capacity];
    return h;
}

int parent(int i){
    return (i - 1) / 2;
}

int left_child(int i){
    return (2 * i) + 1;
}

int right_child(int i){
    return (2 * i) + 2;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sift_up(Heap *h, int i)
{
    while (i != 0 && h->arr[parent(i)] < h->arr[i]){
        swap(&h->arr[i], &h->arr[parent(i)]);
        i = parent(i);
    }
}

void insert(Heap *h, int value)
{
    if (h->size == h->capacity){
        cout << "Heap is full. Cannot insert " << value << endl;
        return;
    }

    int i = h->size;
    h->arr[i] = value;
    h->size++;
    sift_up(h, i);
}

void sift_down(Heap *h, int i){
    int largest = i;
    int left = left_child(i);
    int right = right_child(i);

    if (left < h->size && h->arr[left] > h->arr[largest]){
        largest = left;
    }

    if (right < h->size && h->arr[right] > h->arr[largest]){
        largest = right;
    }

    if (largest != i){
        swap(&h->arr[i], &h->arr[largest]);
        sift_down(h, largest);
    }
}

int extract_max(Heap *h)
{
    if (h->size <= 0){
        cout << "Heap is empty!" << endl;
        return -1;
    }

    if (h->size == 1){
        h->size--;
        return h->arr[0];
    }

    int root = h->arr[0];
    h->arr[0] = h->arr[h->size - 1];
    h->size--;
    sift_down(h, 0);
    return root;
}

void print_h(Heap *h)
{
    for (int i = 0; i < h->size; i++){
        cout << h->arr[i] << " ";
    }
    cout << endl;
}

void free_heap(Heap *h){
    delete[] h->arr;
    delete h;
}

int main()
{
    Heap *h = create(10);

    insert(h, 10);
    insert(h, 20);
    insert(h, 15);
    insert(h, 40);
    insert(h, 50);
    insert(h, 100);

    cout << "Heap after insertions: ";
    print_h(h);
    cout << "Extracted max: " << extract_max(h) << endl;
    cout << "Heap after extraction: ";
    print_h(h);
    free_heap(h);
    return 0;
}