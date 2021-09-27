#include<bits/stdc++.h>
using namespace std;

//#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    int t;
    cin>>t;
    while(t--)
    {
        int n,p,k;
        cin>>n>>p>>k;
        int x=p%k;
        int y=ceil((double)n/k);
        //cout<<x<<" "<<y<<endl;
        int tot=0;
        tot+=x*(y);
        tot+=ceil((double)p/k)-(k-n%k)%k;
        cout<<tot<<endl;
    }

    return 0;
}