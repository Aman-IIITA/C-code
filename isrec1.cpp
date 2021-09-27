#include <bits/stdc++.h>
using namespace std;

signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
		int loi;
		int loj;
		for( i=0;i<n;i++)
		{
			for( j=0;j<m;j++)
			{
				//cout<<i<<j<<"\n";
				if(a[i][j]=='1')
				{
					found=1;
					loi=i;
					loj=j;
					break;
				}
			}
			if(found==1)
				break;
		}
		
		int hii;
		int hij;
		for( i=loi;i<n;i++)
		{
			if(a[i][loj]=='0')
			{
				
				break;
			}
		}
		hii=i-1;
		for( i=loj;i<m;i++)
		{
			if(a[loi][i]=='0')
			{
				
				break;
			}
		}
		hij=i-1;
		//cout<<loi<<" "<<hii<<" "<<loj<<" "<<hij<<"\n";
		found=0;
		for( i=0;i<n;i++)
		{
			for( j=0;j<m;j++)
			{
				if((i>=loi&&i<=hii)&&(j>=loj&&j<=hij))
				{
					if(a[i][j]!='1')
					{
						found=1;
						goto x;
					}

				}
				else
				{
					if(a[i][j]!='0')
					{
						found=1;
						goto x;
					}
				}
			}
		}
		x :
		if(found==1)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		
	}
}