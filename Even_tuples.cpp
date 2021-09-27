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
        int n,q;
        cin>>n>>q;
        vector <int> A(n);
        for(int i=0;i<n;i++)
        cin>>A[i];
        vector <int> cnt1(n+1),cnt2(n+1);
        cnt1[0]=0,cnt2[0]=0;
        for(int i=1;i<=n;i++)
        {
            if(!(A[i-1]&1))
            {
                cnt1[i]=cnt1[i-1]+1;
                cnt2[i]=cnt2[i-1];
            }
            
            else
            {
            cnt1[i]=cnt1[i-1];
            cnt2[i]=cnt2[i-1]+1;
            }
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int eve=cnt1[r]-cnt1[l-1];
            int odd=cnt2[r]-cnt2[l-1];
            if(eve<1||(eve+odd)<3)
            cout<<0<<endl;
            else
            {
                int tot=0;
                if(odd>1)
                tot=odd*(odd-1)/2*eve;
                if(eve>2)
                tot+=eve*(eve-1)*(eve-2)/6;
                cout<<tot<<endl;

            }
        }
    }

    return 0;
}