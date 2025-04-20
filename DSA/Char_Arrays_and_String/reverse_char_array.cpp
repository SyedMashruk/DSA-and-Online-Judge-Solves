#include <bits/stdc++.h>

using namespace std;

void print(char a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void reverse(char a[]) {
    int n = strlen(a);
    int start = 0;
    int end = n-1;
    
    while(start<end){
        swap(a[start++], a[end--]);    
    }
    
    print(a, n);
}

int main() {
    char a[6] = "Hello";
    reverse(a);

}