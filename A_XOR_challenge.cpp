#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    int c;
    cin>>c;
    int len=(int)log2(c)+1;
    vector <int> one;
    vector <int> zero;
    for(int i=0;i<len;i++)
    {
        if(c&1)
        one.push_back(i);
        else
        zero.push_back(i);
        c=c/2;
    }
    int x=0,y=0;
    for(int i=0;i<zero.size();i++)
    {
        x+=(1<<zero[i]);
        y+=(1<<zero[i]);
    }
    x+=(1<<one[one.size()-1]);
    for(int i=0;i<one.size()-1;i++)
    y+=(1<<one[i]);
    cout<<x*y;
    return 0;
}