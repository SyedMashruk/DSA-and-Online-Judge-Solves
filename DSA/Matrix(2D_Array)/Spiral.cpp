#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int s_row = 0;
    int s_col = 0;
    int e_row = n - 1;
    int e_col = m - 1;


    while (s_row <= e_row && s_col <= e_col)
    {

        //Top Row
        for (int i = s_col; i <= e_col; i++)
        {
            cout << a[s_row][i] << " ";
        }
        cout << endl;

        //Right Col
        for (int i = s_row + 1; i <= e_row; i++)
        {
            cout << a[i][e_col] << " ";
        }
        cout << endl;

        //Bottom Row
        for (int i = e_col - 1; i >= s_col; i--)
        {
            if(s_row == e_row)
            {
                break;
            }
            cout << a[e_row][i] << " ";
        }
        cout << endl;

        //Left Col
        for (int i = e_row - 1; i >= s_row + 1; i--)
        {
            if(s_col == e_col)
            {
                break;
            }
            cout << a[i][s_col] << " ";
        }
        cout<<endl;
        s_row++;
        s_col++;
        e_row--;
        e_col--;
    }


    return 0;

}
