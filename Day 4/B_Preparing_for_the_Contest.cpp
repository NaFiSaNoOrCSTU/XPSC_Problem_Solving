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
        int n, k;
        cin >> n >> k;
        if (k == 0)
        {
            for (int i = n; i > 0; --i)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = (n - k); i <= n; ++i)
            {
                cout << i << " ";
            }
            for (int j = (n - (k + 1)); j > 0; --j)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}