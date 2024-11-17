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
        string s;
        cin >> s;
        int cnt1 = 0, cnt0 = 0;
        if (s[0] == '1')
            cnt1++;
        else if (s[0] == '0')
            cnt0++;
        for (int i = 1; i < s.size(); ++i)
        {
            if (s[i] == '1')
            {
                if (s[i - 1] == '1')
                    continue;
                else
                    cnt1++;
            }
            if (s[i] == '0')
            {
                if (s[i - 1] == '0')
                    continue;
                else
                    cnt0++;
            }
        }
        cout << min(cnt1, cnt0) << endl;
    }
    return 0;
}