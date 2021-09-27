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
        string s,p;
        cin>>s>>p;
        if(s==p)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            int one=0,zero=0;
            for(int i=0;i<p.size();i++)
            {
                if(s[i]-'0'==0)
                zero++;
                else
                one++;
            }
            if(zero>0&&one>0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }

    return 0;
}