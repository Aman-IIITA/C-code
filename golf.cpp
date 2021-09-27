#include <bits/stdc++.h>
using namespace std;
#define int long long

signed  main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k;
		cin>>n>>x>>k;
		//cout<<n+1<<" "<<x<<" "<<k<<endl;
		
		if((x%k==0||x==0)&&(n+1)%k==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}