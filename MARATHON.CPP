#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int D,d,a,b,c;
		cin>>D>>d>>a>>b>>c;
		if(d*D>=42)
			cout<<c<<"\n";
		else if(d*D<42&&d*D>=21)
			cout<<b<<"\n";
		else if(d*D<21&&d*D>=10)
			cout<<a<<"\n";
		else
			cout<<"0\n";
	}
}