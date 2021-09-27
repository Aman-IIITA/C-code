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
        int x;
        unordered_map<int,int> m;
        for(int i=0;i<4;i++)
        {
            
            cin>>x;
            ++m[x];
            
        }
        if(m.size()==4||m.size()==3)
        cout<<2<<endl;
        else if(m.size()==2)
        {
            //cout<<m[0]<<" "<<m[1]<<endl;
            if(m[x]==2)
            cout<<2<<endl;
            else
            cout<<1<<endl;
        }
        else
        cout<<0<<endl;
        m.clear();

    }

    return 0;
}