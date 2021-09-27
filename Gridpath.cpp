#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
//#define int long long
vector<vector<long long >> dp;
int gridpath(vector <vector<char> > &a,int m,int n)
{

	if(m==0&&n==0)
		return 1;
	if(a[m][n]=='*')
	{
		dp[m][n]=0;
		return 0;
	}
	if(dp[m][n]!=-1)
		return dp[m][n];
	if(m==0&&n>0)
		(dp[m][n]+=gridpath(a,m,n-1))%mod;
	else if(n==0&&m>0)
		(dp[m][n]+=gridpath(a,m-1,n))%mod;
	else
		(dp[m][n]+=gridpath(a,m-1,n)+gridpath(a,m,n-1))%mod;
	//cout<<dp[m][n]<<endl;
	return dp[m][n];

}
signed main()
{
	for(int i=0;i<1000;i++)
	{
		for(int j=0;j<1000;j++)
			dp[i][j]=-1;
	}
	int n;
	char c;
	cin>>n;
	vector<vector<char>> a(n, vector<char>(n));
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			
		}
		
	}
	if(a[0][0]=='*')
		cout<<0;
	else
	cout<<gridpath(a,n,n);
}