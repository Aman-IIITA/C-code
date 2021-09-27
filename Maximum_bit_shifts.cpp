#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> x(65);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=1;i<64;i++)
    {
        x[i]=(x[i-1]<<1)+1;
        //cout<<x[i]<<endl;
    }
    
    for(int i=0;i<n;i++)
    {
        int len=log2(a[i])+1;
        int cnt=0;
        //cout<<a[i]<<" ";
        while(a[i])
        {
            a[i]=(a[i]&(a[i]-1));
            cnt++;
        }
        int tot=(x[cnt]<<(len-cnt));
        //cout<<len<<" "<<cnt<<" "<<tot<<" "<<x[cnt]<<" "<<endl;
        cout<<tot<<" ";
    }
    

    return 0;
}