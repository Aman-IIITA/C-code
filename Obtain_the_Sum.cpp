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
        int x=n*(n+1)/2-s;
        if(x<1||x>n)
        cout<<-1<<endl;
        else
        cout<<x<<endl;
    }

    return 0;
}