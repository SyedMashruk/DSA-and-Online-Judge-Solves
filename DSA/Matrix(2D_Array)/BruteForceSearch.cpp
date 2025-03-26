// When the matrix is not Sorted
//Time Complexity O(N^2)

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

    cout<<"Input the Key: ";
    int key;
    cin>> key;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == key){
                flag =1;
                break;
            }
        }
        if(flag ==1){
            break;
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
