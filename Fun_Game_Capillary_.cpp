#include<bits/stdc++.h>
using namespace std;

vector<int> funGame (vector<int> arr) {
   stack <int> a;
   stack<int> b;
   int n=arr.size();
   vector<int> res;
   for(int i=0;i<arr.size();i++)
   {
       b.push(arr[i]);
       a.push(arr[n-1-i]);
   }
   while(!a.empty()&&!b.empty())
   {
       if(a.top()>b.top())
       {
           res.push_back(1);
           b.pop();
       }
       else if(a.top()<b.top())
       {
           res.push_back(2);
           a.pop();
       }
       else
       {
           res.push_back(0);
           a.pop();
           b.pop();
       }

   }
   return res;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i_arr=0; i_arr<n; i_arr++)
    {
    	cin >> arr[i_arr];
    }

    vector<int> out_;
    out_ = funGame(arr);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}