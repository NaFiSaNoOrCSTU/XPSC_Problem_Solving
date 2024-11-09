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
        priority_queue<int> card;
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            card.push(x);
            if (x == 0)
            {
                if (!card.empty())
                {
                    sum += card.top();
                    card.pop();
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}