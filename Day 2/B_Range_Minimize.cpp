// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     for(int i=1;i<=t;++i)
//     {
//         int ans;
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int j = 0; j < n; ++j)
//         {
//             cin >> v[i];
//         }
//         sort(v.begin(), v.end());
//         if(i%2==0)
//         {
//         ans = v[v.size() - 3] - v[0];
//         cout << ans << endl;
//         }
//         else
//         {
//              ans = v[v.size()-1]-v[2];
//         cout << ans << endl;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int ans;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int range = v[n - 1] - v[2]; // delete 1st & 2nd minimum
        int range1 = v[n - 3] - v[0]; // delete 1st & 2nd maximum
        int range2 = v[n - 2] - v[1]; // delete 1st maximum & 1st minimum 
        ans = min({range, range1, range2});
        cout << ans << endl;
    }
    return 0;
}
