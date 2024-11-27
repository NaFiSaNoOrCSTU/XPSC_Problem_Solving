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
        int zero = 0, one = 0, big = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x == 0)
                zero++;
            else if (x == 1)
                one = 1;
            else
                big = 1;
        }
        if (zero > (n - zero + 1))
        {
            if (one == 0)
                cout << 1 << endl;
            else
            {
                if (big)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
        }
        else
            cout << 0 << endl;
    }
    return 0;
}