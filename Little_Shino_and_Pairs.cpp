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
    cin>>a[i];
    stack<int> s;
    stack<int> s1;
    s1.push(a[0]);
    s.push(a[0]);
    set<pair<int,int>> st;
    for(int i=1;i<n;i++)
    {
        while(!s.empty()&&a[i]>s.top())
        {
            st.insert({a[i],s.top()});
            s.pop();
        }
        s.push(a[i]);
        // while(!s1.empty()&&a[i]<s1.top())
        // {
        //     st.insert({s1.top(),a[i]});
        //     s1.pop();
        // }
        // s1.push(a[i]);

    }
    while(!s.empty())
    s.pop();
    while(!s1.empty())
    s1.pop();
    s.push(a[n-1]);
    s1.push(a[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        while(!s.empty()&&a[i]>s.top())
        {
            st.insert({a[i],s.top()});
            s.pop();
        }
        s.push(a[i]);
        // while(!s1.empty()&&a[i]<s1.top())
        // {
        //     st.insert({s1.top(),a[i]});
        //     s1.pop();
        // }
        // s1.push(a[i]);

    }
    cout<<st.size()<<endl;

    return 0;
}