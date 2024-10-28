#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin >> a >> b;
    int num,num1,num2;
    num = a+b;
    num1 = (a-1)+a;
    num2 = (b-1)+b;
    cout << max({num,num1,num2}) << endl;
    return 0;
}