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
		int n,k;
		cin>>n>>k;
		int a[k];
		for(int i=0;i<k;i++)
			cin>>a[i];
		string s;
		for(int i=0;i<n;i++)
		{
			int cnt=0;
			cin>>s;
			for(int i=0;i<k;i++)
			{
				if(s[i]=='1')
					cnt+=a[i];
			}
			cout<<cnt<<"\n";
		}

	}
}
