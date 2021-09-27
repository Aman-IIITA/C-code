#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n+1]={0};
  for(int i=1;i<=n;i++)
    a[i]=5*i+a[i-1];
  int t;
  cin>>t;
  t=240-t;
  int lo=0,hi=n,id=-1;;
  while(lo<=hi)
  {
    int mid=(lo+hi)/2;
    if(a[mid]<=t)
    {
      id=mid;
      lo=mid+1;
    }
    else
      hi=mid-1;
  }
  cout<<id;
}