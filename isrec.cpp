#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		char a[n][m];
		for( i=0;i<n;i++)
		{
			for( j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		
		int found =0;
		for( i=0;i<n;i++)
		{
			for( j=0;j<m;j++)
			{
				if(a[i][j]=='1')
				{
					found =1;
					break;
				}
			}
		}
		int loi=i;
		int loj=j;
		int hii;
		int hij;
		for(int i=loi;i<n;i++)
		{
			if(a[i][loj]=='0')
			{
				break;
			}
		}
		hii=i-1;
		for(int i=loj;i<m;i++)
		{
			if(a[loi][i]=='0')
				break;
		}
		hij=i-1;
		cout<<loi<<" "<<hii<<" "<<loj<<" "<<hij<<"\n";
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if((i>=loi&&i<=hii)&&(j>=loj&&j<=hij))
				{
					if(a[i][j]!='1')
					{
						goto x;
					}

				}
				else
				{
					if(a[i][j]!='0');
						goto x;
				}
			}
		}
		cout<<"YES\n";
		x :
		cout<<"NO\n";
	}
}