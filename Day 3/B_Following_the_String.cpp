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
        int a[26] = {0};
        string s;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 26; ++j)
            {
                if (v[i] == a[j])
                {
                    char ch = j + 'a';
                    s += ch;
                    a[j]++;
                    break;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}