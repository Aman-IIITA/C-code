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
        vector <int > a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int b[n][32];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<32;j++)
            {
                if(a[i]&(1<<j))
                b[i][j]=1;
                else
                b[i][j]=0;
            }
        }

        int x=0,y=0;
        for(int i=0;i<32;i++)
        {
            int found=0;
            int one=0;
            int zero=1;
            for(int j=0;j<n;j++)
            {
                if(b[j][i]==0)
                {
                    found=1;
                    zero=0;
                }
                else
                one=1;
                
            }
            if(found==0)
            x+=(1<<i);
            if(one==1&&zero==0)
             y+=(1<<i);
        }
        cout<<x<<" "<<y<<endl;
        
        
    }

    return 0;
}