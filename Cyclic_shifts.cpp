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
        int n,m;
        char c;
        cin>>n>>m>>c;
        
        vector <int> bit(16);
        for(int i=0;i<16;i++)
        {
            if(n&1)
            bit[15-i]=1;
            else
            bit[15-i]=0;
            n=(n>>1);
        }
        if(c=='L')
        {
            int x=0;
            for(int i=0;i<16;i++)
            {
                
                if((i+m)>=16)
                {
                    if(bit[(i+m)-16])
                     x+=(1<<(15-i));
                }
                else
                {
                    if(bit[i+m])
                    x+=(1<<(15-i));
                }
                
                

            }
            cout<<x<<endl;
            
        }
        else{
            int x=0;
            for(int i=0;i<16;i++)
            {
                if(16-m+i<16)
                x+=(bit[16-m+i]<<(15-i));
                else
                x+=(bit[i-m]<<(15-i));
            }
            cout<<x<<endl;
        }
    }

    return 0;
}