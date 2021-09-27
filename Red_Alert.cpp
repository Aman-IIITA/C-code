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
        int n,d,h;
        cin>>n>>d>>h;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int level=0;
        int found=0;
        for(int i=0;i<n;i++)
        {
            if(a[i])
            level+=a[i];
            else
            level=max((int)0,level-d);
            if(level>h)
            {
                found=1;
                break;
            }
        }
        if(!found)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }

    return 0;
}