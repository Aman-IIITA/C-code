#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stack<int> s;
    unordered_map <int,int> g;
    unordered_map <int,int> sm;
    s.push(0);
    for(int i=1;i<n;i++)
    {
        while(!s.empty()&&a[i]>a[s.top()])
        {
            g[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        g[s.top()]=-1;
        s.pop();
    }
    s.push(0);
    for(int i=1;i<n;i++)
    {
        while(!s.empty()&&a[i]<a[s.top()])
        {
            sm[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        sm[s.top()]=-1;
        s.pop();
    }
    // for(int i=0;i<n;i++)
    // {
    //     if(sm[i]!=-1)
    //     cout<<a[i]<<" "<<a[sm[i]]<<endl;
    //     else
    //     cout<<a[i]<<" "<<-1<<endl;
    // }
    for(int i=0;i<n;i++)
    {
        if(g[i]==-1)
        cout<<-1<<" ";
        else
        {
            if(sm[g[i]]!=-1)
            cout<<a[sm[g[i]]]<<" ";
            else
            cout<<-1<<" ";
        }

    }
    return 0;
}