#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
		int n,k;
		cin>>n>>k;
		multiset<long long,greater<long long >> s;
		for(int i=0;i<n;i++)
		{
			long long x;
			cin>>x;
			s.insert(x);
		}
		// for(auto &itr: s)
		// cout<<itr<<" ";
		long long cnt=0;
		for(int i=0;i<k;i++)
		{
			auto it=s.begin();
			long long x=(*it);
			cnt+=x;
			s.erase(s.begin());
			s.insert(x/2);

		}
		cout<<cnt<<"\n";
	}
}