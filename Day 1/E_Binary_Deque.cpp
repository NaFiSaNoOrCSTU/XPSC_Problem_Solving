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
        int n,s;
        cin >> n >> s;
        long long sum=0;
        vector<int> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
            sum+=v[i];
        }
        int l=0,r=0,ans=-1,total=0;
        if(sum==s) cout << 0 << endl;
        else if(sum<s) cout << -1 << endl;
        else if(sum>s)
        {
            while(r<n)
            {
                total+=v[r];
                if(total==s)
                {
                    ans=max(ans,r-l+1);
                }
                else
                {
                    while(total>s && l<=r)
                    {
                        total-=v[l];
                        l++;
                    }
                    if(total==s)
                    {
                        ans=max(ans,r-l+1);
                    }
                }
                r++;
            }
            cout << n-ans << endl;
        }
    }
    return 0;
}
//// ber korte hb maximum koto size er subarray jog kora jabe using variable sized sliding window...
