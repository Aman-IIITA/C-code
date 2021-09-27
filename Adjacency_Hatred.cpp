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
        vector<int> eve,odd;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]&1)
            odd.push_back(a[i]);
            else
            eve.push_back(a[i]);
        }
        if(eve.size()==0||odd.size()==0){
        cout<<-1<<endl;
        continue;
        }
        for(int i=0;i<odd.size();i++)
        {
            cout<<odd[i]<<" ";
        }
        for(int i=0;i<eve.size();i++)
        {
            cout<<eve[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}