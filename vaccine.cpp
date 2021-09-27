#include <bits/stdc++.h>
using namespace std;
//#define int double
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g,p,a[10];
		cin>>g>>p;
		for(int i=0;i<10;i++)
			cin>>a[i];
		int temp=p;
		double cnt=0;
		for(int i=9;i>g-1;i--)
		{
			cnt+=a[i];
		}
		//cout<<cnt<<"\n";
		int min_days=ceil(cnt/p);
		if((int)cnt%p==0)
			min_days+=1;
		int max_days=ceil((cnt+a[g-1])/p);
		
		cout<<min_days<<" "<<max_days<<"\n";
	}
}