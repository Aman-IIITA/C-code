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
        int x1=a+b;
        int x2=b+c;
        int x3=c+a;
        cout<<max(max(x1,x2),x3)<<endl;
    }

    return 0;
}