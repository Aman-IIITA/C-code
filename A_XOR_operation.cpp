#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        unordered_map<int,int> x;
        int k=0;
        for(int i=0;i<n;i++)
        {
            k=(k^a[i]);
            x[a[i]]=1;
        }
        int y,flag=0;
        for(int i=0;i<n;i++)
        {
            y=(k^a[i]);
            if(x[y]!=1)
            {
                flag=1;
            }
        }
        if(flag)
        cout<<-1<<endl;
        else
        cout<<k<<endl;
    }

    return 0;
}