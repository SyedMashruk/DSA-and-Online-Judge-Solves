#include <bits/stdc++.h>

using namespace std;

void countingSort(int * arr, int n) {
    int minVal= INT_MAX;
    int maxVal = INT_MIN;
    int freq[10000] = {0};
    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }
    for (int i = minVal, j=0; i <= maxVal; i++) {
        while(freq[i]>0){
            arr[j]= i;
            freq[i]--;
            j++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {

        0,
        1,
        0,
        5,
        3,
        2,
        2,
        6,
        5,
        6
    };
    countingSort(arr, 10);

}