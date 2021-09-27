#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    set<int> s;
    for(int i=0;i<63;i++)
    {
        int x=1;
        for(int j=i+1;j<63;j++)
        {
            x=1;
            int y=1;
            int p,q;
            p=i;
            q=j;
            while(p>30)
            {
                x=(x<<30);
                p=p-30;
            }
            while(q>30)
            {
                y=(y<<30);
                q=q-30;
            }
            x=(x<<p);
            y=(y<<q);
            x=x+y;
            //cout<<x<<endl;
            s.insert(x);
        }
    }
    //cout<<*s.begin()<<endl;
    vector<int>a;
    for(auto ele:s)
    {
        a.push_back(ele);
    }
    vector<int>sum(a.size());
    sum[0]=a[0];
    for(int i=1;i<a.size();i++)
    {
        sum[i]=(sum[i-1]+a[i])%mod;
    }
    //cout<<a[0]<<endl;;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=0;
        while(true)
        {
            if(n<a[i])
            break;
            i++;
        }
        if(i==0)
        cout<<0<<endl;
        else
        {
            cout<<sum[i-1]<<endl;
        }
    }

    return 0;
}