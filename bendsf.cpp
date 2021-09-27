#include <bits/stdc++.h>
using namespace std;
# define int long long

signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		string s1="",s0="";
		for(int i=0;i<x;i++)
		{
			s1+="1";
			s0+="0";
		}
		for(int i=0;i<n-x;i++)
		{
			if((i&1)==0)
			{
				s1+="1";
				s0+="1";
			}
			else
			{
				s1+="0";
				s0+="0";
			}
		}
		cout<<s1<<"\n"<<s0<<"\n";
	}
}