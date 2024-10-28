#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;++i)
    {
        cin >> v[i];
    }
    int sereja=0;
    int dima=0;
    int ind=0;
    int ind1=n-1;
    for(int i=0;i<n;++i)
    {
        if(i%2==0)
        {
            sereja += max(v[ind],v[ind1]);
            if(v[ind] > v[ind1]) ind++;
            else if(v[ind] < v[ind1]) ind1--;
            else break;
        }
        else
        {
            dima += max(v[ind],v[ind1]);
            if(v[ind] > v[ind1]) ind++;
            else if(v[ind] < v[ind1]) ind1--;
            else break;
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}