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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int s;
        cin>>s;
        set<int> st;
        
        
        for(int i = 0;i < (1 << n); ++i)
        {
            int sum=0;
            for(int j = 0;j < n;++j)
            {
                if(i & (1 << j))
                    sum+=a[j];
            }
                    
            st.insert(sum);
            
        }
        if(st.find(s)!=st.end())
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    

    return 0;
}