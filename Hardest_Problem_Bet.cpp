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
        int a,b,c;
        cin>>a>>b>>c;
        int req=min(a,min(b,c));
        if(req==a)
        cout<<"Draw"<<endl;
        else if(req==b)
        cout<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl;
    }

    return 0;
}