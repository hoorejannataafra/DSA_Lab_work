#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int size){
    for (int i=0;i<size-1;i++){
    for (int j=0;j<size-i-1;j++){
           if (arr[j]>arr[j + 1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout << "Sorted Array: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[]={1, 6, 9, 4, 10, 6, 8, 3, 2, 9, 7, 8, 12, 7, 15};
    int size = 15;
    bubbleSort(arr, size);
    return 0;
}