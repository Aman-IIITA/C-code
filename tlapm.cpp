#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		int cnt=1;
		for(int i=1;i<x1;i++)
			cnt+=i+1;
		for(int i=1;i<y1;i++)
			cnt+=i+x1-1;
		//cout<<cnt<<"\n";
		int tot=cnt;
        for(int i=x1;i<x2;i++)
		{
			tot+=i+y1;
			cnt+=tot;
		}
		//cout<<cnt<<" "<<tot<<"\n";

		for(int i=y1;i<y2;i++)
		{
			tot+=(i+x2-1);
			cnt+=tot;
		}
		cout<<cnt<<"\n";
	}
}