#include <bits/stdc++.h>
using namespace std;


signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,x1,y1,d;
		cin>>x>>y>>x1>>y1>>d;
		if(x>=x1*d&&y>=y1*d)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}