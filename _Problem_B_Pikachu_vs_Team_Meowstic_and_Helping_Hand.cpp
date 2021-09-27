#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;
vector<int> a;
signed main(){
    fastio;

    int n,k;
    cin>>n>>k;
   
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    vector<int> b(n);
    b=a;
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            for(int j=i+1;j<n;j++)
            {
                a[j]=(a[j]|b[j-1]);
            }
            cout<<a[i]<<" ";
            b=a;
        }
        else
        cout<<a[i]<<" ";
    }

    return 0;
}