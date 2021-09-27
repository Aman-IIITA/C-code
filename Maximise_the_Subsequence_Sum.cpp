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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        //multiset<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            //s.insert(a[i]);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<k;i++)
        {
            if(a[i]<0)
            a[i]*=-1;

        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            sum+=a[i];
                    
        }
        cout<<sum<<endl;
        
        
    }

    return 0;
}