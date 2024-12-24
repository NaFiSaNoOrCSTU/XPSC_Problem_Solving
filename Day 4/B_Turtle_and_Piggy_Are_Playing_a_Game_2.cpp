// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> v[i];
//         }
//         int cnt = 0;
//         if (n == 1)
//         {
//             cout << v[0] << endl;
//         }
//         else
//         {
//             for (int i = v.size() - 2; i >= 0; --i)
//             {
//                 if (cnt % 2 == 0)
//                 {
//                     v[i] = max(v[i], v[i + 1]);
//                     int x = i + 1;
//                     v.erase(v.begin() + x);
//                     if (v.size() == 1)
//                     {
//                         cout << v[0] << endl;
//                         break;
//                     }
//                 }
//                 else
//                 {
//                     v[i] = min(v[i], v[i+1]);
//                     int x = i + 1;
//                     v.erase(v.begin() + x);
//                     if (v.size() == 1)
//                     {
//                         cout << v[0] << endl;
//                         break;
//                     }
//                 }
//                 cnt++;
//             }
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << v[n / 2] << endl;
    }
    return 0;
}