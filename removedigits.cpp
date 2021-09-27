#include <bits/stdc++.h>
using namespace std;
int dp[1000000];
int remove(int n)
{
	int a[6];
	if(n<10)
		return 1;
	if(dp[n]!=1000000)
		return dp[n];
	int x=n;
	int i=0;
	while(x)
	{
		a[i++]=x%10;
		x=x/10;
	}
	while(i--)
		dp[n]=min(remove(n-a[i])+1,dp[n]);
	return dp[n];

}
signed main()
{
	for(int i=0;i<1000000;i++)
		dp[i]=1000000;
	dp[0]=1;
	int n;
	cin>>n;
	cout<<remove(n);
}