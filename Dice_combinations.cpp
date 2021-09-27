#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int dp[1000000];

long long sum=0;

int dice(int x)
{
	int i=1;
	if(x==0)
		return 1;
	if(x==1)
		return 1;
	if(dp[x]!=0)
		return dp[x];
	while(i<=6&&x-i>=0)
	{
		dp[x]=(dp[x]%mod+dice(x-i)%mod)%mod;
		i++;
	}
	return dp[x];
}

signed main()
{
	dp[0]=1;
    dp[1]=1;
    dp[2]=2;
	int n;
	cin>>n;
	int x=dice(n);
	cout<<x;
}