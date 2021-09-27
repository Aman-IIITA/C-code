#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		char a[3][3];
		int o=0,x=0,cnt=0,co=0,cx=0;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>a[i][j];
				if(a[i][j]!='_')
					cnt++;
				if(a[i][j]=='O')
					co++;
				if(a[i][j]=='X')
					cx++;
			}
		}
		for(int i=0;i<3;i++)
		{
			if(a[i][0]=='O'&&a[i][1]=='O'&&a[i][2]=='O')
				o++;
			if(a[i][0]=='X'&&a[i][1]=='X'&&a[i][2]=='X')
				x++;
		}
		for(int j=0;j<3;j++)
		{
			if(a[0][j]=='O'&&a[1][j]=='O'&&a[2][j]=='O')
				o++;
			if(a[0][j]=='X'&&a[1][j]=='X'&&a[2][j]=='X')
				x++;
		}
		if(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O')
			o++;
		if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')
			x++;
		if(a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O')
			o++;
		if(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X')
			x++;
		if((o>0&&x>0)||co>cx||cx>co+1||(x>0&&co>=cx)||(o>0&&cx>=co))
			cout<<3<<"\n";
		else if((o==0&&x==0&&cnt<9))
			cout<<2<<"\n";
		else
			cout<<1<<"\n";
	}
}