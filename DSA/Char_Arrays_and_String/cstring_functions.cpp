
#include <bits/stdc++.h>

using namespace std;

int main() {
    char str1[100] = "xbc";
    char str2[100] = "ayz";
    char str3[100];

    cout << str1 << endl;
    cout << str2 << endl;

    strcpy(str3, str1);

    cout << str3 << endl;

    strcat(str1, str2);
    cout << str1 << endl;

    cout << strcmp(str1, str2) << endl; // compare one by one character

}