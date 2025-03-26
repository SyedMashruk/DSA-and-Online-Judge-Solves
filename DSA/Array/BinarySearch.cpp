#include <bits/stdc++.h>

using namespace std;

void binarySearch(int arr[], int key, int n) {
    int flag = -1;
    int first = 0;
    int last = n-1;
    int index = 0;
    
    while(first <= last){
        int mid = (first + last)/2;
        if(arr[mid] == key){
            flag = 1;
            index = mid;
            break;
        }else if(arr[mid] > key){
            last = mid - 1;
        }else{
            first = mid + 1;
        }
    }
    
    if (flag == 1) {
        cout << "Item Found at Index "<<index;
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
    binarySearch(a, key, 10);

    return 0;

}