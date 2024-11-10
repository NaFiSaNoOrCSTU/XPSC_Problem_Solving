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
//         for (int i = 1; i < n; ++i)
//         {
//             if (v[i - 1] > v[i])
//             {
//                 while (v[i] < v[i - 1])
//                 {
//                     v[i] = v[i] + v[i - 1];
//                 }
//             }
//             else if (v[i - 1] < v[i])
//             {
//                 while (v[i] > v[i - 1])
//                 {
//                     v[i - 1] = v[i] + v[i - 1];
//                 }
//             }
//             else if (v[i - 1] == v[i])
//                 continue;
//         }
//         int cnt = 0;
//         for (auto val : v)
//         {
//             // cout << val << " ";
//             if (val != v[0])
//             {
//                 cnt++;
//                 break;
//             }
//         }
//         // cout << endl;
//         if (cnt == 0)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
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
        // check korte hb array te kono oshoman positive value ase kina..thakle ota kokhonoi shoman hb na...barbei
        int cnt = 0;
        for (int i = 1; i < n; ++i)
        {
            if (v[0] != v[i] && v[i] != 0)
            {
                cnt++;
                break;
            }
        }
        if (cnt == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
