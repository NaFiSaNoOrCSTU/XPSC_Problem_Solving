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
        int a, b, c;
        cin >> a >> b >> c;
        int x = a - 1;
        int y;
        if (b < c)
        {
            y = (c - b) + (c - 1);
        }
        else
        {
            y = b - 1;
        }
        if (x < y)
            cout << 1 << endl;
        else if (x > y)
            cout << 2 << endl;
        else if (x == y)
            cout << 3 << endl;
    }
    return 0;
}