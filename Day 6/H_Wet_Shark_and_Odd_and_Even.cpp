#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    long long sum=0;
    int odd=INT_MAX;
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i]%2 != 0)
        {
            if(a[i] < odd)
            {
                odd=a[i];
            }
        }
    }
    if(sum%2 == 0) cout << sum << endl;
    else cout << sum-odd << endl;
    return 0;
}