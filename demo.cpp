#include <bits/stdc++.h>
using namespace std;
//#define int long long

long long int cubeofsum(long long int n)
{
	long long int sum=0;
	while(n>0)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	return sum*sum*sum;
}
signed  main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,ans,i=1,flag=0;
		cin>>n>>k;
		//ans=cubeofsum(n);
        ans=n;
		while(i<=k)
		{
            long long int x=cubeofsum(ans);
			if(ans==cbrt(x)&&ans>9)
			{
				flag=1;
				cout<<ans*ans*ans<<"\n";
				break;
			}
			
		ans=x;
		i++;
		}
		if(flag==0)
		cout<<ans<<endl;
	}
	return 0;
}