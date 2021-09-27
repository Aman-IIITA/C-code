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
        int n,c01,c10;
        cin>>n>>c01>>c10;
        vector <int> a(n);
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i&1)
            {
                if(a[i])
                odd++;
            }
            else
            {
                if(a[i])
                even++;
            }
        }
        if(odd>even)
        {
            int x=even*c10+(n/2-odd)*c01;
            cout<<x<<endl;
        }
        else
        {
            int x=odd*c10+(ceil(n/2)-even)*c01;
            cout<<x<<endl;
        }
    }

    return 0;
}