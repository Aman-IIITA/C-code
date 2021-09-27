#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        cout<<n+m-s.size()<<"\n";
    }
}