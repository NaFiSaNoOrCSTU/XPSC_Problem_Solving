// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     deque<string> dq;
//     for (int i = 0; i < n; ++i)
//     {
//         string s;
//         cin >> s;
//         if (find(dq.begin(), dq.end(), s) == dq.end())
//         {
//             dq.push_front(s);
//         }
//         else
//         {
//             dq.erase(find(dq.begin(), dq.end(), s));
//             dq.push_front(s);
//         }
//     }
//     for (auto val : dq)
//     {
//         cout << val.substr(val.size() - 2, 2);
//     }
//     cout << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     deque<string> dq;
//     set<string> st;

//     for (int i = 0; i < n; ++i)
//     {
//         string s;
//         cin >> s;
//         if (st.count(s))
//         {
//             dq.erase(find(dq.begin(), dq.end(), s));
//         }
//         else
//         {
//             st.insert(s);
//         }
//         dq.push_front(s);
//     }
//     for (auto val : dq)
//     {
//         cout << val.substr(val.size() - 2, 2);
//     }
//     cout << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    stack<string> st;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    set<string> ans;
    while (!st.empty())
    {
        if (ans.count(st.top()) == 0)
        {
            ans.insert(st.top());
            string r = st.top();
            cout << r.substr(r.size() - 2, 2);
        }
        st.pop();
    }
    cout << endl;
    return 0;
}
