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
        unordered_map<int,int> m;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
        }
        int max=-1;
        for(auto &it : m)
        {
            if(it.second>max)
            max=it.second;
        }
        if(n==1||n==2)
        cout<<0<<endl;
        else if(max==1)
        cout<<n-2<<endl;
        else
        cout<<n-max<<endl;
    }

    return 0;
}