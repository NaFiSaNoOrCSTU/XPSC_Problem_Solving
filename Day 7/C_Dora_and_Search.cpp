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
        int mn = 1, mx = n;
        int low = 0, high = n - 1;
        int cnt = -1;
        while (high > low)
        {
            if ((v[low] == mx && v[high] == mn) || (v[low] == mn && v[high] == mx))
            {
                low++;
                high--;
                mn++;
                mx--;
            }
            else if (v[low] == mx)
            {
                mx--;
                low++;
            }
            else if (v[high] == mn)
            {
                mn++;
                high--;
            }
            else if (v[low] == mn)
            {
                mn++;
                low++;
            }
            else if (v[high] == mx)
            {
                mx--;
                high--;
            }
            else
            {
                cout << low + 1 << " " << high + 1 << endl;
                cnt++;
                break;
            }
        }
        if (cnt == -1)
        {
            cout << cnt << endl;
        }
    }
    return 0;
}