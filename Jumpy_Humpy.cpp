#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;
vector<int> dp;
signed main(){
    fastio;

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stack <int> res;
    res.push(a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]>res.top())
        res.push(a[i]);
    }
    cout<<res.top()<<endl;
    dp.push_back(res.top());
    res.pop();
    int i=1;
    while(!res.empty())
    {
        cout<<res.top()<<endl;
       dp.push_back(dp[i-1]^res.top());
       res.pop();
       i++;

    }
    // for(int i=0;i<dp.size();i++)
    // {
    //     cout<<dp[i]<<endl;
    // }
    // int dp_max=*max_element(dp.begin(),dp.end());
    // int a_max=*max_element(a.begin(),a.end());
    // cout<<dp_max;
    
    return 0;
}