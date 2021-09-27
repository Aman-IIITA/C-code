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
        int n,s;
        cin>>n>>s;
        if(s>n)
        {
            cout<<2*n-s<<endl;
        }
        else
        cout<<s<<endl;
    }

    return 0;
}