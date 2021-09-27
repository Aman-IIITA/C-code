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
        vector<int>bitcnt(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            int cnt=0;
            while(a[i])
            {
                a[i]=(a[i]&(a[i]-1));
                cnt++;
            }
            bitcnt[i]=cnt;
        }
        sort(bitcnt.begin(),bitcnt.end(),greater<int>());
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=bitcnt[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}