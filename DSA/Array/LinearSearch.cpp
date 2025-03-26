#include <bits/stdc++.h>

using namespace std;

void linearSeach(int arr[], int key, int n) {
    int flag = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        cout << "Item Found";
    } else {
        cout << "Item Not Found";
    }
    cout << endl;
}

int main()
{
    int key;
    cin >> key;
    int a[] = {
        1,
        2,
        3,
        4,
        10,
        50,
        60,
        101,
        200,
        250
    };
    linearSeach(a, key, 10);

    return 0;

}