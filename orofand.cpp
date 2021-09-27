#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,j,sum;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int a[n];
		int b[32]={0};
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum|a[i];
			int num=a[i];
			 j=0;
			while(num!=0)
			{
				if(num&1)
					b[j]++;
				num=num/2;
				j++;
			}
		}
		cout<<sum<<"\n";
		// sum=0;
		// 	for(int i=0;i<32;i++)
		// 	{
		// 		if(b[i])
		// 			sum=sum*2+1;
		// 		else
		// 			sum=sum*2;
		// 	}
		// 	cout<<sum<<"\n";
		while(q--)
		{
			int x,v;
			cin>>x>>v;
			int num=a[x-1];
			 j=0;
			while(num!=0)
			{
				if(num&1)
					b[j]--;
				num=num/2;
				j++;

			}
			

			 j=0;
			while(v)
			{
				if(v&1!=0)
					b[j]++;
				v=v/2;
				j++;
			}
			 sum=0;
			for(int i=31;i>=0;i--)
			{
				if(b[i]>0)
					sum=sum*2+1;
				else	
					sum=sum*2;
			}
			cout<<sum<<"\n";

		}
	}
}