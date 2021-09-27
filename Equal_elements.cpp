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
        vector <int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int max=*max_element(a.begin(),a.end());
        int count=0;
        for(int i=0;i<n;i++)
        {
            int diff=max-a[i];
            if(diff&1)
            count++;
        }
        cout<<count<<endl;
    }

    return 0;
}