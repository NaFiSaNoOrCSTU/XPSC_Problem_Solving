#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    map<string,string> mp;
    while(n--)
    {
        string str1,str2;
        cin >> str1 >> str2;
        mp[str2]=str1;
    }
    while(m--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        string IP=s2;
        IP.erase((s2.size()-1),1);
        //cout << IP << endl;
        cout << s1 << " " << s2 << " #" << mp[IP] << endl; 
    }
    return 0;
}