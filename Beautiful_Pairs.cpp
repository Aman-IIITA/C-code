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
        vector<int > freq(1000001);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        int tot=n*(n-1);
        for(int i=1;i<1000001;i++)
        {
            if(freq[i]>1)
            tot-=freq[i]*(freq[i]-1);
        }
        cout<<tot<<endl;
    }

    return 0;
}