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
        int n,m,l;
        cin>>n>>m>>l;
        vector <int> A(n+1);
        for(int i=0;i<m;i++)
        {
            int len;
            cin>>len;
            for(int j=0;j<len;j++)
            {
                int x;
                cin>>x;
                A[x]=i+1;
            }
        }
        int cnt=1;
        int strip[l];
        for(int i=0;i<l;i++)
        {
            cin>>strip[i];
        }
        for(int i=1;i<l;i++)
        {
            if(A[strip[i]]!=A[strip[i-1]])
            cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}