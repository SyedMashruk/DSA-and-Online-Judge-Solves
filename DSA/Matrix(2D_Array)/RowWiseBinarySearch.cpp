//Row Wise Binary Search
//When the row is sorted
//Time Complexity O(nlogm)

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

    for (int i = 0; i < n; i++)
    {
        int first = 0;
        int last = m - 1;

        while (first <= last) {
            int mid = (first + last) / 2;
            if (a[i][mid] == key) {
                flag = 1;
                break;
            } else if (a[i][mid] > key) {
                last = mid - 1;
            } else {
                first = mid + 1;
            }
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