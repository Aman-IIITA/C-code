#include <bits/stdc++.h>
using namespace std;
int dp[1000001];
int main()
{
	for(int i=0;i<1000001;i++)
		dp[i]=1000001;
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	
	dp[0]=0;
	//dp[1]=1;
	//dp[2]=2;
	for(int i=0;i<=x;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			
			if(i-a[j]>=0)
			{
				
				dp[i]=min(dp[i],dp[i-a[j]]+1);
				
			}
			
		}
		//cout<<dp[i]<<endl;
		
	}
	if(dp[x]==1000001)
		cout<<"-1\n";
	else
		cout<<dp[x];

}