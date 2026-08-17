#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n){
    for (int i=0;i<10;i++){
        if(arr[i]==n)
            return i + 1;
    }
    return -1;
}

int main(){

    int n;
    int arr[10]={3, 6, 1, 4, 8, 3, 2, 4, 6, 10};
    cout << "Enter the value you want to search: ";
    cin >> n;
    int result = search(arr, n);
    if(result==-1)
        cout << "Number is not found.";
    else
        cout << "Number is found at position: " << result;
    return 0;
}