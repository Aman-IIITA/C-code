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
        int n;
        cin>>n;
        if(n&1)
        {
            // int x;
            // if((x+1)%4==0)
            // {
            //     x=1;
            // }
            // else
            // x=-1;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if((i==j))
                    cout<<-1<<" ";
                    else
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<-1<<" ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}