#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i=1;i<n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){

    int arr[]={1, 6, 9, 245, 10};
    int size = 5;
    insertionSort(arr, size);
    cout << "Sorted Array: ";
    for (int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}