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
        if(n%4==1)
        cout<<"East"<<endl;
        else if(n%4==2)
        cout<<"South"<<endl;
        else if(n%4==3)
        cout<<"West"<<endl;
        else
        cout<<"North"<<endl;
    }

    return 0;
}