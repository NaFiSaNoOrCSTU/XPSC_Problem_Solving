#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int l = 0, r = 0;
    long long ans = 0;
    map<int, int> mp;
    while (r < n)
    {
        mp[v[r]]++;
        // if(mp.size()<=k)
        // {
        //     ans+=(r-l+1);
        // }
        // else
        // {
        while (mp.size() > k && l <= r)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
            {
                mp.erase(v[l]);
            }
            l++;
        }
        //}
        ans += (r - l + 1);
        r++;
    }
    cout << ans << endl;
    return 0;
}

int n=a.size();
        long long sum=0;
        int ans=0;
        int l=0,r=0;
        while(r<n)
        {
            sum+=a[r];
            if(sum==k)
            {
                ans=max(ans,r-l+1);
            }
            else
            {
                while(sum>k && l<=r)
                {
                    sum-=a[l];
                    l++;
                }
            }
            r++;
        }
        return ans;


         int n=a.size();
    int l = 0, r = 0;
    long long int sum = 0;  
    int ans = 0;    

    while (r < n) 
    {
       sum += a[r];
        while (sum > k && l<=r)
        {
            sum -= a[l];
            l++;
        }
        if (sum == k)
        {
            ans = max(ans, r - l + 1);
        }
        r++;
    }
    return ans;