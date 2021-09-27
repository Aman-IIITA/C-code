#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    vector <int> a(10000);
    a[0]=1;
    vector<int> sum(10000);
    sum[0]=1;
    for(int i=1;i<10000;i++)
    {
        a[i]=a[i-1]+2;
        sum[i]=sum[i-1]+a[i];
    }
    //cout<<sum[2]<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s;
        cin>>n>>k>>s;
        int x=s-sum[n-1];
        x=x/(k-1);
        cout<<x<<endl;
    }

    return 0;
}