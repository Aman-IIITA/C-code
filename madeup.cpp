#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	cin>>n;
	int a[n+1],b[n+1],c[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	//int cnt=0;
	vector <int> cnt(n+1);
	for(int i=1;i<=n;i++)
	{
		cnt[b[c[i]]]+=1;
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=cnt[a[i]];
	}
	cout<<ans;
}