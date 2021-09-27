#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;
bool sortbyfir(const pair<pair<int,int>,int> &a,
              const pair<pair<int,int>,int> &b)
{
    if(a.first.first < b.first.first)
    return true;
    else if(a.first.first > b.first.first)
    return false;
    else
    {
        return (a.second<b.second);
    }

}
signed main(){
    fastio;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<pair<pair<int,int>,int>> x;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            int temp=a[i];
            int cnt=0;
            while(temp)
            {
                temp=(temp&(temp-1));
                cnt++;
            }
            x.push_back({{cnt,a[i]},i});
        }
        sort(x.begin(),x.end(),sortbyfir);
    for(auto &it: x)
    {
        cout<<it.first.second<<" ";
    }
    cout<<endl;

    }
    
    return 0;
}