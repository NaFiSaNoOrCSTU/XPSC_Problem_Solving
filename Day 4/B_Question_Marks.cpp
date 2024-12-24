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
        string s;
        cin >> s;
        vector<int> v(4, 0);
        for (auto c : s)
        {
            if (c == '?')
                continue;
            else
            {
                v[c - 'A']++;
            }
        }
        int ans = 0;
        for (int i = 0; i < 4; ++i)
        {
            if (v[i] >= n)
            {
                ans += n;
            }
            else
            {
                ans += v[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}