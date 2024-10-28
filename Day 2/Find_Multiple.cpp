#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,num;
    cin >> a >> b >> c;
    int cnt=0;
    for(int i=a;i<=b;++i)
    {
        if(i%c == 0)
        {
            cnt++;
            num=i;
            break;
        }
    }
    if(cnt == 0) cout << -1 << endl;
    else cout << num << endl;
    return 0;
}