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
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                cnt++;
                break;
            }
        }
        if (cnt == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}