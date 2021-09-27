#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		vector <int> fre(26);
		for(int i=0;i<s.size();i++)
			fre[s[i]-'a']++;
		int cnt=0;
		for(int i=0;i<26;i++)
		{
			if(fre[i]&1)
				cnt++;
		}
		if(s.size()&1)
		{
			if(cnt==1||cnt==3)
				cout<<"DPS\n";
			else
				cout<<"!DPS\n";
		}
		else
		{
			if(cnt==2)
				cout<<"DPS\n";
			else
				cout<<"!DPS\n";
		}
	}
}