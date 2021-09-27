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
        int k;
        cin>>k;
        int n=ceil(sqrt(k));
        int x=(n*n+(n-1)*(n-1)+1)/2;
        int r=n,c=n;
        if(k<x)
        r-=(x-k);
        else
        c-=(k-x);
        cout<<r<<" "<<c<<endl;
    }

    return 0;
}

