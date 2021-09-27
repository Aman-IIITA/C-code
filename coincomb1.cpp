#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007 
#define int long long
int dp[1000001];
signed main()
{
	dp[0]=1;
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		//dp[a[i]]=1;
	}
	
	for(int i=1;i<=x;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i-a[j]>=0)
			{
				
				dp[i]=(dp[i]+(dp[i-a[j]]))%mod;
			}
		}
		//cout<<dp[i]<<endl;
	}
	cout<<dp[x];


}