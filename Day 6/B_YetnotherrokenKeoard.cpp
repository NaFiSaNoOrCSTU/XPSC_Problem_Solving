#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        cin.ignore();
        string str;
        cin >> str;
        vector<char> s;
        for(char ch:str)
        {
            s.push_back(ch);
        }
        for(int i=0;i<s.size();++i)
        {
            if(s[i] == 'b')
            {
                s.erase(s.begin()+i);
                if(!s.empty())
                {
                    for(int j=s.size()-1;j>=0;--j)
                    {
                        if(islower(s[j]))
                        {
                            s.erase(s.begin()+j);
                            break;
                        }
                    }
                }
            }
            else if(s[i] == 'B')
            {
                s.erase(s.begin()+i);
                if(!s.empty())
                {
                    for(int j=s.size()-1;j>=0;--j)
                    {
                        if(isupper(s[j]))
                        {
                            s.erase(s.begin()+j);
                            break;
                        }
                    }
                }
            }
        }
        if(s.empty()) cout << endl;
        else
        {
            for(auto val:s)
            {
                cout << val;
            }
            cout << endl;
        } 
    }
    return 0;
}

