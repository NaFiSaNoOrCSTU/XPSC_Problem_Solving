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
        string s1 = s;
        reverse(s1.begin(), s1.end());
        int l = s.size() - 1;
        if (s <= s1 && n % 2 == 0)
            cout << s << endl;
        else if (s > s1 && n % 2 == 0)
            cout << s1 + s << endl;
        else if (s <= s1 && n % 2 != 0)
            cout << s + s1 << endl;
        else if (s > s1 && n % 2 != 0)
            cout << s1 << endl;
    }
    return 0;
}
//>>> 'abaa' emon testcase lexicographically equal korar jonno string er modhe comparison..