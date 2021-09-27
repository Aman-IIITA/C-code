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
        int r1,w1,c1;
        int r2,w2,c2;
        cin>>r1>>w1>>c1;
        cin>>r2>>w2>>c2;
        int cnt1=0;
        int cnt2=0;
        if(r1>r2)
        cnt1++;
        else
        cnt2++;
        if(w1>w2)
        cnt1++;
        else
        cnt2++;
        if(c1>c2)
        cnt1++;
        else
        cnt2++;
        if(cnt1>cnt2)
        cout<<"A\n";\
        else
        cout<<"B"<<endl;
    }
    

    return 0;
}