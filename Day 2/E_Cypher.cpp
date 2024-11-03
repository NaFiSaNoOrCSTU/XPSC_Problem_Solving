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
        vector<int> a(n);
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int ind=0;
        while (n--)
        {
            v1=a;
            int num;
            string move;
            cin >> num >> move;
            for(int i=0;i<num;++i)
            {
                if(move[i] == 'D')
                {
                    if(v1[ind] == 9) v1[ind]=0;
                    else v1[ind]++;
                }
                else if(move[i] == 'U')
                {
                    if(v1[ind] == 0) v1[ind]=9;
                    else v1[ind]--;
                }
            }
            v.push_back(v1[ind]);
            ind++;
        }
        for(int val:v)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}