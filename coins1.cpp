#include <bits/stdc++.h>
using namespace std;
#define int long long

int dp[1000001];
int n,x;
int coin(int x,int a[])
{
	//cout<<dp[x]<<endl;
	if(x==0)
		return 0;
	if(dp[x]!=1000001)
		return dp[x];
	for(int i=0;i<n;i++)
	{
		if(x-a[i]>=0)
			if(coin(x-a[i],a)!=-1)
			    dp[x]=min(dp[x],coin(x-a[i],a)+1);
	}
	//cout<<x<<endl;
	if(dp[x]==1000001)
		return -1;
	return dp[x];
}
signed main()
{
	for(int i=0;i<1000001;i++)
		dp[i]=1000001;
	dp[0]=0;
	cin>>n>>x;
	 int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	int res=coin(x,a);
	cout<<res;
}