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
        int a1,b1,c1,a2,b2,c2;
        cin>>a1>>b1>>c1>>a2>>b2>>c2;
        if(a1+b1+c1>a2+b2+c2)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }

    return 0;
}