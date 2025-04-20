#include <bits/stdc++.h>

using namespace std;

void print(char a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void palindrome(char a[]) {
    int n = strlen(a);
    int start = 0;
    int end = n-1;
    int flag = 1;
    
    while(start<end){
        if(a[start++] != a[end--]){
            flag = 0;
            break;
        }    
    }
    
    print(a, n);
    
    if(flag == 1){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
}

int main() {
    char a[] = "racecar";
    palindrome(a);

}