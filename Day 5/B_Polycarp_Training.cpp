// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     set<int> s;
//     for(int i=0;i<n;++i)
//     {
//         cin >> v[i];
//         s.insert(v[i]);
//     }
//     int day=1;
//     int cnt=0;
//     for(auto val:s)
//     {
//         if(val>=day)
//         {
//             cnt++;
//             day++;
//         }
//         else break;
//     }
//     cout << cnt << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> ml;
    for(int i=0;i<n;++i)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    int cnt=0,prb=1;
    while(!ml.empty())
    {
        auto LB=ml.lower_bound(prb);
        if(LB!=ml.end())
        {
            ml.erase(LB);
            cnt++;
        }
        else break;
        prb++;
    }
    cout << cnt << endl;
    return 0;
}