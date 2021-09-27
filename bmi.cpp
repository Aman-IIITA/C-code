#include <bits/stdc++.h>
using namespace std;
# define int long long

signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int m,h;
		cin>>m>>h;
		int bmi=m/(h*h);
		if(bmi<=18)
			cout<<1<<"\n";
		else if(bmi>18&&bmi<=24)
			cout<<2<<"\n";
		else if(bmi>24&&bmi<=29)
			cout<<3<<"\n";
		else
			cout<<4<<"\n";
	}
}
