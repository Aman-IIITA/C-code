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
        vector<int> b(n-1);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        if(n>2)
        {
            int x1=b[0]-a[0];
            int x2=b[1]-a[1];
            int x3=b[2]-a[2];
            if(x1==x2||x1==x3)
            cout<<x1<<endl;
            else
            cout<<x2<<endl;
        }
        else
        {
            int diff1=b[0]-a[0];
            int diff2=b[0]-a[1];
            if()
        }
    }

    return 0;
}