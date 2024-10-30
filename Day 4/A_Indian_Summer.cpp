#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<pair<string,string>,int> mp;
    while(n--)
    {
        string a,b;
        cin >> a >> b;
        mp[{a,b}]=1;
    }
    cout << mp.size() << endl;
    return 0;
}