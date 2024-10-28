#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int tmp=n;
    int cnt=0;
    while(tmp != 0)
    {
        tmp = tmp/10;
        cnt++;
    }
    if(cnt == 4) cout << n << endl;
    else if(cnt == 3) cout << "0" << n <<endl;
    else if(cnt == 2) cout << "00" << n << endl;
    else if(cnt == 1) cout << "000" << n <<  endl;
    else if(cnt == 0) cout << "0000" << endl;
    return 0;
}