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
        int x=ceil(n/2.0);
        if(x&1)
        {
            cout<<n-1<<endl;
        }
        else
        cout<<n<<endl;

    }

    return 0;
}