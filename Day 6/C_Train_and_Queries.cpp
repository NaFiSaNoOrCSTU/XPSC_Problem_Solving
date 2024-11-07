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
        int st, q;
        cin >> st >> q;
        map<int, set<int>> mp;
        for (int i = 0; i < st; ++i)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            if ((mp.find(x) == mp.end()) || (mp.find(y) == mp.end()))
            {
                cout << "NO" << endl;
            }
            else
            {
                int left = *mp[x].begin();
                int right = *mp[y].rbegin();
                if (left < right)
                {
                    cout << "YES" << endl;
                }
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}