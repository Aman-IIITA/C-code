#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n,k;
	cin>>n>>k;
	multiset<int,greater<int>> s;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		s.insert(x);
	}
	int i=0;
	for(auto it=s.begin();i<k;it++)
	{
		i++;
		cout<<*it<<" ";
	}

}