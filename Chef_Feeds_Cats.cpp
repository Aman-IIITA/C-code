#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,found=0;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<m;i++)
        {
            
            int x;
            cin>>x;
            a[x-1]++;
            //cout<<*max_element(a.begin(),a.end())<<" "<<*min_element(a.begin(),a.end())<< endl;
            if(*max_element(a.begin(),a.end())-*min_element(a.begin(),a.end())>1)
            {
                found=1;
            }
        } 
        if(found==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
}