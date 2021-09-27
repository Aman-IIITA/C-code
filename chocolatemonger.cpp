#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,c;
		cin>>n>>x;
		set <long long> a;
		for(int i=0;i<n;i++)
		{
			cin>>c;
			a.insert(c);
		}
		// for(auto it=a.begin();it!=a.end();it++)
		// 	cout<<*it<<" "
		if((n-a.size()-x)<0)
		{
			//cout<<n- (a.size()) - x<<"\n";
			cout<<a.size()+(n-a.size()-x)<<"\n";
		
		}
		else
			cout<<a.size()<<"\n";
		
	}
}