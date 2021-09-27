#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,ca=0,cb=0;
		cin>>n>>a>>b;
		
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			if(s[0]=='E'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X'||s[0]=='Q')
				ca+=a;
			else
				cb+=b;
		}
		if(ca>cb)
			cout<<"SARTHAK\n";
		else if(cb>ca)
			cout<<"ANURADHA\n";
		else
			cout<<"DRAW\n";
	}
}