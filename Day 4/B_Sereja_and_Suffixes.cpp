#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int> v(n),cnt(n);
    for(int i=0;i<n;++i)
    {
        cin >> v[i];
    }
    set<int>s;
    for(int i=n-1;i>=0;--i)
    {
        s.insert(v[i]);
        cnt[i]=s.size();
    }
    while(m--)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos-1] << endl;
    }
    return 0;
}