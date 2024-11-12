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
        int n, m, h;
        cin >> n >> m >> h;
        priority_queue<long long> car, outlet;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            car.push(x);
        }
        for (int i = 0; i < m; ++i)
        {
            int x;
            cin >> x;
            outlet.push(x);
        }
        long long ans = 0;
        while (!car.empty() && !outlet.empty())
        {
            if ((outlet.top() * h) >= car.top())
            {
                ans += car.top();
            }
            else
            {
                ans += (outlet.top() * h);
            }
            car.pop();
            outlet.pop();
        }
        cout << ans << endl;
    }
    return 0;
}