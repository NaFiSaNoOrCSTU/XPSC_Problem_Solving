#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,t;
    cin >> a >> b >> t;
    int time = t/a;
    cout << time*b << endl;
    return 0;
}