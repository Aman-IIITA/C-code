#include <bits/stdc++.h>
using namespace std;
int n,k=0;
vector<vector<int>> v;

void dp (int i, int j)
{
	k++;
	if(k>n*n)
		return;
	else
	{
		if(k%n==1)
	    {
		    i=i+2;
		    j=j+1;
		    v[i][j]=k;
		    dp(i-1,j-1);
	    }
	    else
	    {
	    	if(i<0)
	    		i+=n;
	    	if(j<0)
	    		j+=n;
	    	v[i][j]=k;
	    	dp(i-1,j-1);
	    }
	}
	
}
int main()
{
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		vector <int > v1;
		for(int j=0;j<n;j++)
			v1.push_back(0);
		v.push_back(v1);
	}
	v[0][n/2]=1;
	k++;
	dp(-1,n/2-1);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<v[i][j]<<" ";
		cout<<"\n";
	}
}