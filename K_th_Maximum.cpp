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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int m=*max_element(a.begin(),a.end());
        //cout<<max<<endl;
        vector<int> req;
        for(int i=0;i<n;i++)
        {
            if(a[i]==m)
            req.push_back(i);
        }
        int cnt=0;
        //cout<<req[0]<<endl;
        for(int i=0;i<req.size();i++)
        {
            int l=req[i]+2-k;
            //cout<<l<<endl;
            if(l>0&&l<=n)
            {
                if(n-req[i]>0)
                cnt+=(n-req[i]);
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}