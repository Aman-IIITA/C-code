#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
signed main(){
    fastio;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        vector<int> x;
        int i=0;
        while(n)
        {
            if(n&1)
            {
                cnt++;
                x.push_back(i);
            }
            i++;
            n=(n>>1);
        }
        cout<<cnt<<endl;
        for(int i=0;i<x.size();i++)
        {
            cout<<binpow(3,x[i])<<" ";
        }
        cout<<endl;
    }

    return 0;
}