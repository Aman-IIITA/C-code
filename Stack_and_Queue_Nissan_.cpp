#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=a[0];
    for(int i=n-1;i>n-k;i--)
    {
        ans+=a[i];
    }
    //cout<<ans<<endl;
    int first=1;
    int last=n-k+1;
    //cout<<last<<endl;
    int x=ans;
    for(;first<k;)
    {
        x=x-a[last]+a[first];
        //cout<<x<<endl;
        if(x>ans)
        ans=x;
        first++;
        last++;
    }
    cout<<ans<<endl;
    return 0;
}