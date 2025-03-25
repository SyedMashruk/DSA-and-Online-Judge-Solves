 #include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j< n-1-i; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
	int arr[]={4,1,5,3,2,6};
	bubbleSort(arr, 6);

}
