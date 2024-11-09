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
        int song;
        cin >> song;
        vector<int> p(song), q(song);
        for (int i = 0; i < song; ++i)
        {
            cin >> p[i];
        }
        string feed;
        cin >> feed;
        map<int, int> mp;
        vector<int> one, zero;
        for (int i = 0; i < song; ++i)
        {
            if (feed[i] == '0')
            {
                zero.push_back(p[i]);
            }
            else if (feed[i] == '1')
            {
                one.push_back(p[i]);
            }
        }
        sort(zero.begin(), zero.end());
        sort(one.begin(), one.end());
        int j = 1;
        for (int i = 0; i < zero.size(); ++i)
        {
            mp[zero[i]] = j;
            j++;
        }
        for (int i = 0; i < one.size(); ++i)
        {
            mp[one[i]] = j;
            j++;
        }
        vector<int> ans;
        for (int i = 0; i < song; ++i)
        {
            ans.push_back(mp[p[i]]);
        }
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}