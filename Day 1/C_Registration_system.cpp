#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string,int> mp;
    while(n--)
    {
        string s;
        cin >> s;
        if(mp.find(s) == mp.end())
        {
            mp[s]=1;
            cout << "OK" << endl;
        }
        else
        {
            // char ch=s[s.size()-1];
            // if(isdigit(ch))
            // {
            //     (int)ch++;
            //     cout << s << ch << endl;
            //     string newName=s+ch;
            //     mp[newName]=1;
            // }
            // else if(isalpha(ch))
            // {
            //     cout << s << 1 << endl;
            //     char c=1;
            //     string newName1=s+c;
            //     mp[newName1]=1;
            // }
            int count = mp[s];
            string newName = s + to_string(count);
            mp[s] = count + 1;
            mp[newName] = 1;
            cout << newName << endl;
        }
    }
    return 0;
}
