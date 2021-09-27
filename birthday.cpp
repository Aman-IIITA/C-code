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
		set<string> m;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			m.insert(s);
		}
		for(auto &it:m)
			cout<<it<<"\n";
	}
}