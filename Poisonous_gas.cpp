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
        vector<int> a(n);
        int tot=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            tot+=a[i];
        }
        int cnt=0;
        while(tot)
        {
            tot=(tot&(tot-1));
            cnt++;
        }
        if(cnt==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }

    return 0;
}