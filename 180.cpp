#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	reverse(s.begin(),s.end());
	string str="";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='6')
			str+='9';
		else if(s[i]=='9')
			str+='6';
		else
			str+=s[i];

	}
	cout<<str;
}