#include <bits/stdc++.h>

using namespace std;

void print(char a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void ToUppercase(char a[]) {
    int n = strlen(a);
    char c;
    for (int i = 0; i < n; i++) {
        c = a[i];
        if (c >= 'a' && c <= 'z') {
            a[i] = c - 'a' + 'A';
        }

    }
    print(a, n);
}

int main() {
    char a[6] = "Hello";
    ToUppercase(a);

}