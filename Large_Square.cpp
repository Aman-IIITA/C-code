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
        int n,a;
        cin>>n>>a;
        int cnt=0;
        for(int i=1;i*i<=100000;i++)
        {
            if(i*i<=n)
            {
                cnt=i;
            }
            else
            break;
        }
        cout<<cnt*a<<endl;
    }

    return 0;
}