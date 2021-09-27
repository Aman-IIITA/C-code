#include <bits/stdc++.h>
using namespace std;
#define int long long

bool sortbyfir(const pair<int,int> &a,
              const pair<int,int> &b)
{
     if(a.first > b.first)
     return true;
     else if(a.first==b.first)
     {
     	if(a.second<b.second)
     		return true;
     	else
     		return false;
     }
     else
     	return false;
}
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector <pair<int ,int>> a;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a.push_back(make_pair(x,i+1));
		}
		
		sort(a.begin(),a.end(),sortbyfir);
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<a[i].first<<" "<<a[i].second<<"\n";
		// }
		for(int i=0;i<n;i++)
		{
			a[i].first=i+1;
		}
		sort(a.begin(),a.end(),sortbysec);
		for(int i=0;i<n;i++)
		{
			cout<<a[i].first<<" ";
		}
		cout<<"\n";
	}
}
