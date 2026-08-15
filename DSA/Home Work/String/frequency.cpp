#include <bits/stdc++.h>
using namespace std;

int main(){

    char str[30];
    cout << "Enter a string: ";
    cin.getline(str, 30);

    for (int i=0;str[i]!='\0';i++) 
    {
        if (str[i]>='A' && str[i]<='Z') {
            str[i] = str[i]+32;
        }
    }

    for(char c='a';c<='z';c++){
        int count = 0;
    for(int i=0;str[i]!='\0';i++){
            if (str[i]==c) {
                count++;
            }
        }
        if(count >0){
            cout << "Frequency of " << c << " is: " << count << endl;
        }
    }
    
    return 0;
}