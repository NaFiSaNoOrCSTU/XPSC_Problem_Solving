#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cust = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    while (n--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int cost;
            cin >> cost;
            s.insert({cust, cost});
            ml.insert({cost, -cust});
            cust++;
        }
        else if (type == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else
        {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end()); // ml.erase(ml.rbegin()) evabe hb na..
            s.erase({pos, money});
        }
    }
    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}