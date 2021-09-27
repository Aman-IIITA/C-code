#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[7];
		for(int i=0;i<7;i++)
			cin>>a[i];
		if(a[4]>=a[0]&&a[5]>=a[1]&&a[6]>=a[2]&&(a[4]+a[5]+a[6]>=a[3]))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}