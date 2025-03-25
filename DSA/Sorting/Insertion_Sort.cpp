#include <bits/stdc++.h>

using namespace std;

void insertionSort(int * arr, int n) {
    for (int i = 1; i < n; i++) {
        int temp = i;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[temp]) {
                swap(arr[temp], arr[j]);
                temp = j;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSortWhile(int * arr, int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]> curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {

        1,
        -2,
        5,
        3,
        2,
        6
    };
    insertionSortWhile(arr, 6);

}