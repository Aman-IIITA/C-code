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
        string s1;
        string s2;
        cin>>s1>>s2;
        // cout<<s1<<endl;
        // cout<<s2<<endl;
        vector<int> a(26);
        vector<int> b(26);
        int cnt=0;
        int found=0;
        for(int i=0;i<s1.size()&&i<s2.size();i++)
        {
            //cout<<s1[i]<<" "<<s2[i]<<endl;
            a[s1[i]-'a']++;
            b[s2[i]-'a']++;
            if(a[s1[i]-'a']>0&&b[s1[i]-'a']>0)
            cnt++;
            if(b[s2[i]-'a']>0&&a[s2[i]-'a']>0)
            cnt++;
            if(cnt>1)
            {
                found=1;
                break;
            }
        }
        if(found==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;

    }

    return 0;
}