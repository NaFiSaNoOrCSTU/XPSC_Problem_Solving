#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int len;
        cin >> len;
        string name="Timur";
        sort(name.begin(),name.end());
        string s;
        cin >> s;
        int cnt=0;
        if(len != 5) cout << "NO" << endl;
        else
        {
            sort(s.begin(),s.end());
            if(s == name) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}