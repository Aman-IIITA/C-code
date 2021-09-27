#include <bits/stdc++.h>
using namespace std;
#define int long long

void fun(int n, long long a[])
{
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        //cout<<a[i]<<endl;
        while(a[i])
        {
            a[i]=(a[i]&(a[i]-1));
            cnt++;
        }
        //cout<<cnt<<endl;
        cout<<(1<<cnt)<<"\n";
    }
}

signed main()
{
	int t;
	cin>>t;
	long long a[t+1];
	for(int i=1;i<=t;i++)
        cin>>a[i];
    fun(t,a);
    return 0;
}