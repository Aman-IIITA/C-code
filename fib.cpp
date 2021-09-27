#include <bits/stdc++.h>
using namespace std;
#define int long long
long long binpow(long long a, long long b) 
{
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
signed main()
{
    vector <int>fib (62);
    fib[0]=0;
    fib[1]=1;
    fib[2]=1;
    for(int i=3;i<=61;i++)
    {
        fib[i]=(fib[i-1]%10+fib[i-2]%10)%10;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=0;
        while(n>>=1)++p;

        // for(int i=0;i<n;i++)
        // {
        //     cout<<fib[i%60]<<endl;
        // }
        cout<<fib[(binpow(2,p)-1)%60]%10<<endl;

    }

    return 0;
}