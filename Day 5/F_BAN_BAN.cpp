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
        if (n % 2 != 0)
        {
            cout << (n + 1) / 2 << endl;
        }
        else
        {
            cout << n / 2 << endl;
        }
        int l = 2, r = 3 * n;
        while (l < r)
        {
            cout << l << " " << r << endl;
            l += 3;
            r -= 3;
        }
    }
    return 0;
}