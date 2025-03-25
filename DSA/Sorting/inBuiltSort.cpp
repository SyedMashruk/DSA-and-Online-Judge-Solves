#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]= {4,6,5,3,2,0};

    //Ascending Order

    sort(arr, arr+6);

    for(int i=0; i<6; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    // Descending Order

    sort(arr, arr+6, greater<int>());

    for(int i=0; i<6; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
