//Stair Case Search
//When the column and row both are sorted
//Time Complexity O(n+m)

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m, flag = -1;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Input the Key: ";
    int key;
    cin >> key;
    int row = n-1;
    int col = 0;

    while(row >= 0 && col < m)
    { 
            if (a[row][col] == key) {
                flag = 1;
                break;
            } else if (a[row][col] > key) {
               row--;
            } else {
                col++;
            }
    }

    if (flag == 1) {
        cout << "Item Found";
    } else {
        cout << "Item Not Found";
    }
    cout << endl;

    return 0;

}