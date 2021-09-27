#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int weight[100002]={0};
		int n,w,rod,flag=0;
		cin>>n>>w>>rod;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			weight[x]++;
		}

		int sum=rod;
		for(int i=0;i<100002;i++)
		{
			if(sum>=w)
			{
				flag=1;
				break;
			}
			if(weight[i]!=0)
			{
				sum=sum+2*i*(weight[i]/2);
			}
			//cout<<sum<<endl;
		}
		//cout<<sum<<endl;
		if(flag==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}
}