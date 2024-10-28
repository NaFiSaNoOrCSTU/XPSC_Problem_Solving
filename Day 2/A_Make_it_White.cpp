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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ind=0,ind1=0;
        for(int i=0;i<s.size();++i)
        {
            if(s[i] == 'B')
            {
                ind = i;
                break;
            }
        }
        for(int i=s.size()-1;i>=0;--i)
        {
            if(s[i] == 'B')
            {
                ind1 = i;
                break;
            }
        }
        cout << (ind1-ind)+1 << endl;
    }
    return 0;
}