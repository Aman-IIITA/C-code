#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    int n;
    cin>>n;
    
    vector <int> c(n);
    for(int i=0;i<n;i++)
    cin>>c[i];
    
    int cnt=0,tot;
    for(int i=0;i<(1<<n);i++)
    {
         tot=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            tot+=c[j];
        }
        //cout<<tot<<endl;
        if((tot&1)==0 && tot!=0)
        cnt++;
    }
    
    
    cout<<cnt<<endl;


    return 0;
}