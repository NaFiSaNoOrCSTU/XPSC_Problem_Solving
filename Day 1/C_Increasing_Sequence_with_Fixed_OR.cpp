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
        long long n;
        cin >> n;
        deque<long long> ans;
        for (int k = 0; k <= __lg(n); ++k) //__lg(number) ekta function ja kono number er maximum bit koto porjonto hote pare ta bole
        {
            if ((n >> k) & 1)
            {
                long long val = n - (1LL << k);
                if (val > 0)
                {
                    ans.push_front(val);
                }
            }
        }
        ans.push_back(n);
        cout << ans.size() << endl;
        for (auto v : ans)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}