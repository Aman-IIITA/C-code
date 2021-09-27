#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int> set(n);

    for(int i=0;i<n;i++)
    {
        string s=bitset<32>(a[i]).to_string();
        for(int j=1;j<32;j++)
        {
            if((s[j]==s[j-1])&&s[j]=='1')
            {
                set[i]=1;
                continue;
            }
        }
    }
    
    vector <int> sum(n+1);
    
    sum[0]=0;
    for(int i=0;i<n;i++)
    {

        sum[i+1]=sum[i]+set[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<sum[i]<<endl;
    // }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }

    return 0;
}