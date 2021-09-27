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
        int n,m,q;
        cin>>n>>m>>q;
        unordered_set<int> s;
        int fnd=0;
        while(q--)
        {
            cin.ignore();
            char ch;
            int i;
            cin>>ch>>i;
            // cout<<ch<<" "<<i<<endl;
            // cout<<s.size()<<endl;
            if(ch=='+')
            {
                if(s.size()>=m)
                {
                    fnd=1;
                }
                else
                {
                    if(s.find(i)!=s.end())
                    {
                        fnd=1;
                      
                    }
                    else
                    s.insert(i);
                }
            }
            else if(ch=='-')
            {
                if(s.find(i)!=s.end())
                s.erase(i);
                else
                {
                    fnd=1;
                }
            }
        }
        x :
        if(fnd==0)
        cout<<"Consistent"<<endl;
        else
        cout<<"Inconsistent"<<endl;
        s.clear();
    }

    return 0;
}