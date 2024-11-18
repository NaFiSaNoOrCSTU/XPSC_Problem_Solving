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
        long long int a, b, n, s;
        cin >> a >> b >> n >> s;
        int r = s % n;
        if (r <= b && ((n * a) + b >= s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}