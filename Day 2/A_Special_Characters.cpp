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
        string s="AA",s1="BB",ans;
        int l=n/2;
        if(n==1) cout << "NO" << endl;
        else if(n%2!=0) cout << "NO" << endl;
        else if(n%2==0)
        {
            cout << "YES" << endl;
            while(l>0)
            {
                if(l%2!=0) ans+=s;
                else ans+=s1;
                l--;
            }
            cout << ans << endl;
        }
    }
    return 0;
}