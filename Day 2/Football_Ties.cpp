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
        int x, y;
        cin >> x >> y;
        int a, b;
        a = x % 3;
        b = y % 3;
        cout << min(a, b) << endl;
    }
    return 0;
}