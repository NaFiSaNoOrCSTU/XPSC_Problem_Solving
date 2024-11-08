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
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         int freq[26];
//         for (char ch : s)
//         {
//             //cout << ch << " ";
//             freq[ch - 'a']++;
//         }
//         int len = n - k;
//         int odd = 0;
//         for (int i=0;i<26;++i)
//         {
//             cout << freq[i] << " ";
//         }
//         odd=odd-k;
//         if ((len % 2 == 0 && odd == 0) || (len % 2 != 0 && odd == 1))
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto val : s)
        {
            mp[val]++;
        }
        int odd = 0;
        for (auto v : mp)
        {
            if (mp[v.first] % 2 != 0)
            {
                odd++;
            }
        }
        if (odd == k || odd - 1 == k || odd < k)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
