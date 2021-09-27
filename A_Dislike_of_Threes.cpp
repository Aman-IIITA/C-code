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
    vector<int> a;
    
    for(int i=1;i<=1667;i++)
    {
        if((i%10!=3)&&(i%3!=0))
        a.push_back(i);
    }
    while(t--)
    {
        int k;
        cin>>k;
        cout<<a[k-1]<<endl;
    }

    return 0;
}