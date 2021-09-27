#include <bits/stdc++.h>
using namespace std;
#define int long long

int code(int dp[],string s,int n)
{
	if(n==1||n==0)
		return 1;
	if(dp[n]!=0)
		return dp[n];
	if(s[n-1]!='0')
        dp[n]+=code(dp,s,n-1);

	if(n>=2)
	{
		//cout<<n<<" "<<(s[n-2]-'0')*10+(s[n-1]-'0')<<endl;
		if(((s[n-2]-'0')*10+(s[n-1]-'0'))<=26&&(s[n-2]-'0')*10+(s[n-1]-'0')>=10)
		   dp[n]+=code(dp,s,n-2);
	}
	
	//cout<<n<<" "<<dp[n]<<endl;
	return dp[n];


}
signed  main()
{
	
	
	string s;
	while(cin>>s)
	{
		int dp[5001]={0};
		dp[0]=1;
		if(s=="0")
			break;
		cout<<code(dp,s,s.length())<<"\n";
	}
}