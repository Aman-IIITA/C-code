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
        double x,y;
        cin>>x>>y;
        if(x+y>=6)
        cout<<0<<endl;
        else
        {
            cout<<setprecision(7)<<(6-(x+y))/6<<endl;
        }
    }

    return 0;
}