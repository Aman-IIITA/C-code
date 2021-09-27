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
        string s;
        cin>>s;
        int curr=s[0];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=curr)
            {
                cnt++;
                curr=s[i];
            }
        }
        if(cnt<k)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            if((s[0]=='0'&&k%2==0)||(s[0]=='1'&&k%2!=0))
            {
                for(int i=s.size()-1;i>=0;i--)
                {
                    if(s[i]=='0')
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
            else if((s[0]=='0'&&k%2!=0)||(s[0]=='1'&&k%2==0))
            {
                for(int i=s.size()-1;i>=0;i--)
                {
                    if(s[i]=='1')
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}