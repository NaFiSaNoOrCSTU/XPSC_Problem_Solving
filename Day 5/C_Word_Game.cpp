#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m=3;
        map<string,vector<int>> mp;
        cin >> n;
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        vector<int> ans(m+1);
        for(auto val:mp)
        {
            vector<int> v=val.second;
            if(v.size() == 1)
            {
                ans[v[0]] += 3;
            }
            if(v.size() == 2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }
        for(int i=0;i<m;++i)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}