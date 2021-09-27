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
        int p,m;
        cin>>p>>m;
        int x=(p^m);
        int cnt=0;
        while(x)
        {
            x=(x&(x-1));
            cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}