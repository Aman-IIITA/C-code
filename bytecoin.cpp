#include <bits/stdc++.h>
using namespace std;
#define int long long
map <int,int> dp;

int coin(int x)
{
	if(x==0)
		return 0;
	if(x==1)
		return 1;
	if(dp[x]!=0)
		return dp[x];
	int sum=0;
	sum=coin(x/2)+coin(x/3)+coin(x/4);
	if(sum>x)
		dp[x]=sum;
	else
		dp[x]=x;
	return dp[x];
}
signed main()
{
	
	int n;
	
	while(cin>>n)
	{
		
	    cout<<coin(n)<<"\n";

	}
	
}