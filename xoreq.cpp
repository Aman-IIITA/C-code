#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<binpow(2,n-1,mod)<<"\n";
	}
}
