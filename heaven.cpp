#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,i;
		double cnt=0;
		cin>>l;
		string s;
		cin>>s;
		for( i=0;i<l;i++)
		{
			cnt+=s[i]-'0';
			if(cnt>=(i+1)/2.0)
			{
				cout<<"Yes\n";
				break;
			}

		}
		if(i==l)
			cout<<"No\n";
	}
}