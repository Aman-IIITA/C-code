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
        int n,i;
        cin>>n;
        vector <int> a(n),b(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        int min=n;
        int loc;
        for(i=0;i<n;i++)
        {
            if((a[0]+b[i])%n<min)
            {
                min=(a[0]+b[i])%n;
                loc=i;
            }
        }
        vector <int> c(n);
        for(int i=0;i<n;i++)
        {
            if(i+loc>=n)
             c[i]=(a[i]+b[(i+loc)-n])%n;
             else
              c[i]=(a[i]+b[(i+loc)])%n;
        }
        int loc1=0;
        for(int i=0;i<n;i++)
        {
            if((a[0]+b[i])%n==min&&i!=loc)
            loc1=i;

        }
        if(loc1)
        {
            vector <int> c1(n);
            for(int i=0;i<n;i++)
            {
              if(i+loc1>=n)
              c1[i]=(a[i]+b[(i+loc1)-n])%n;
              else
              c1[i]=(a[i]+b[(i+loc1)])%n;
           }
           if(c<c1)
           {
               for(int i=0;i<n;i++)
               cout<<c[i]<<" ";
               cout<<endl;
           }
           else
           {
               for(int i=0;i<n;i++)
               {
                   cout<<c1[i]<<" ";
               }
               cout<<endl;
           }

        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
        
    }

    return 0;
}