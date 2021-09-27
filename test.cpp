#include <bits/stdc++.h>
using namespace std;

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x,y;
		cin>>n>>m;
		int a[n][2];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<2;j++)
				a[i][j]=0;
		}
		cin>>x>>y;
		string s;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			for(int j=0;j<m;j++)
			{
				if(s[j]=='F')
					a[i][0]++;
				if(s[j]=='P')
					a[i][1]++;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i][0]>=x||(a[i][0]==x-1&&a[i][1]>=y))
				cout<<1;
			else
				cout<<0;
		}
		cout<<"\n";
	}
}