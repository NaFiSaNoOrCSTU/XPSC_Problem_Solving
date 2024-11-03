#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int col;
        cin >> col;
        int row = 2;
        char a[row][col];
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < col; ++i)
        {
            if ((a[0][i] == 'R' && a[1][i] != 'R') || (a[0][i] != 'R' && a[1][i] == 'R'))
            {
                cnt++;
                break;
            }
        }
        if (cnt == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}