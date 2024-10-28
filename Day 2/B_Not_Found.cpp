#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int a[26]={0};
    int cnt=0;
    for(int i=0;i<s.size();++i)
    {
        a[s[i]-'a']++;
    }
    char ch;
    for(int i=0;i<26;++i)
    {
        if(a[i] == 0) 
        {
            cnt++;
            ch=i+'a';
            break;
        }
    }
    if(cnt ==0) cout << "None" << endl;
    else cout << ch << endl;
    return 0;
}