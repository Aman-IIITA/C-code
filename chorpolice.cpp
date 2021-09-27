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
		int n,m,x,y,a,b;
		cin>>n>>m;
		cin>>x>>y;
		cin>>a>>b;
		if(max(n-a,m-b)<(n+m-x-y))
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
}