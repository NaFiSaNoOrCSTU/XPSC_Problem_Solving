#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    int sum = 0, sum1 = 0;
    sum = x + (y * 0.5) + (4 - (x + y + z));
    sum1 = (y * 0.5) + z;
    if (sum > sum1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}