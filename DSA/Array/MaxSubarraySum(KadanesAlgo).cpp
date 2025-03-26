#include <bits/stdc++.h>

using namespace std;

//Kadane's Algorithm

void maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    int currSum = 0;
    
    for (int i = 0; i < n; i++) {
        
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        
        if (currSum < 0) {
            currSum = 0;
        }
    }

        cout << maxSum<< endl;
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
        -50,
        60,
        -101,
        200,
        250
    };
    maxSubarraySum(a, 10);

    return 0;

}
