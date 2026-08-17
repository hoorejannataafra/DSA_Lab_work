#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int value) {
    if(low>high)
        return -1;

    int mid=(low+high)/2;
    if (arr[mid]==value)
        return mid;
    else if(arr[mid]>value)
        return binarySearch(arr, low, mid-1, value);
    else
        return binarySearch(arr, mid+1,high,value);
}

int main(){

    int arr[]={2, 5, 9, 10, 25, 46, 55, 59, 62, 79, 84, 98};
    int size = sizeof(arr)/sizeof(arr[0]);
    int value;
    cout << "Enter the value you want to find: ";
    cin >> value;
    int result = binarySearch(arr,0,size-1,value);
    if(result == -1)
        cout << value << " is not found in the array.";

    else
        cout << value << " is found at index: " << result;
    return 0;
}