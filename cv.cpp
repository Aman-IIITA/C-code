#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a;
		cin>>a;
		int cnt=0;
		for(int i=0;i<n-1;i++)
		{
			if((a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u')&&(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'))
				cnt++;

		}
		cout<<cnt<<"\n";
	}
}