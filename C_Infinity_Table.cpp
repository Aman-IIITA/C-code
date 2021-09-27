#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

signed main(){
    fastio;

    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int n=ceil(sqrt(k));
        int x=(n*n+(n-1)*(n-1)+1)/2;
        int r=n,c=n;
        if(k<x)
        r-=(x-k);
        else
        c-=(k-x);
        cout<<r<<" "<<c<<endl;
    }

    return 0;
}

//Tanmay's code
// #include<bits/stdc++.h>
// using namespace std;

// void inf(int k)
// {
// int x=1;

// //long int a[100000][100000];
// int i=0;
// int j=0;

// //a[0][0]=1;
// if(k==1)
// {cout<<i+1<<" "<<j+1<<endl;
// return;}
// j++;

// while(1)
// {
// if(i==0)
// {
// for(i=0;i<j;i++)
// {
//   x++;
//   //a[i][j]=x;
//   if(x==k)
//   {cout<<i+1<<" "<<j+1<<endl;
//     return;}
// }
// }

// if(i==j)
// {
//   x++;
//   if(x==k)
//   {cout<<i+1<<" "<<j+1<<endl;
//     return;}
//   while(j>0)
//   {
//     j--;
//     x++;
     
//     //a[i][j]=x;
   
//     if(x==k)
//   {cout<<i+1<<" "<<j+1<<endl;
//     return;}
    
//   }
// }
// if(j==0)
//   {
//     j=i+1;
//     i=0;
//   }
  
// }
// }


// int main()
// {
 
//   int t;
// cin>>t;
// for(int i=0;i<t;i++)
//    {
//      long long int k;
//      cin>>k;
//      inf(k);
//    }
// return 0;
// }