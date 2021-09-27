#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

signed main()
{
	int n;
	cin>>n;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		(cnt+=num)%mod;
	}
	int q;
	cin>>q;
	while(q--)
	{
		cnt=((cnt%mod)*2)%mod;
		cout<<cnt<<"\n";
	}
}