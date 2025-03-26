#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int sum = 0;

    /*Time Complexity O(N^2)

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j || j == n-1-i)
            {
                sum += a[i][j];
            }

        }
    }*/

    //Time Complexity O(N)
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
        int j = n-i-1;
        if(j != i){
            sum += a[i][j];
        }
    }

    cout<< "Sum: "<< sum <<endl;


    return 0;

}

