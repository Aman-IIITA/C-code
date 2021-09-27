#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
int last_move = 0;
char solve (vector<string> &Number) {
   int cnt=0;
   vector <int > bit(1000001);
   for(int i=0;i<Number.size();i++)
   {
       for(int j=0;j<Number[i].size();j++)
       {
           if(Number[i][j]=='1')
           bit[j]=1;
       }
   }
   for(int i=0;i<bit.size();i++)
   {
       if(bit[i]==1)
       cnt++;
   }
   last_move=cnt;
   if(cnt&1)
   return 'A';
   else
   return 'B';
}

signed main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<string> Number(N);
    for(int i_Number=0; i_Number<N; i_Number++)
    {
    	cin >> Number[i_Number];
    }

    char out_;
    out_ = solve(Number);
    cout << out_ << endl;
    cout << last_move << endl;

}