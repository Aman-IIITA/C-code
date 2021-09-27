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
        int dif=abs(a-b);
        if(2*dif<max(a,b)||c>2*dif)
        cout<<-1<<endl;
        else
        {
            if(c+dif>2*dif)
            cout<<c-dif<<endl;
            else
            cout<<c+dif<<endl;
        }
    }

    return 0;
}