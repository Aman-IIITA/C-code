#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;
void heapify(string arr, int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
 
// main function to do heap sort
void heapSort(string &arr, int n,int &cash,int &a)
{
   
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        if(cash>=a){
        swap(arr[0], arr[i]);
 
       cash-=a;
        heapify(arr, i, 0);
        }
        else
        return;
    }
}
signed main(){
    fastio;

    int n;
    cin>>n;
    string s;
    cin>>s;
    int cash,a,b;
    cin>>cash;
    cin>>a>>b;
    
    if(a>b)
    {
        int cnt1=0;
        
            for(int i=0;i<n;i++)
            {
                if(cash>=b&&s[i]=='1')
                {
                    s[i]='0';
                    cash-=b;                
                }
            }
            heapSort(s,n,cash,a);
            cout<<s<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     if(cash>=a&&s[i]=='1')
        //     {
        //         for(int j=i+1;j<n-1;j++)
        //         {
        //             if(s[j]=='0')
        //             {
        //                 s[j]='1';
        //                 s[i]='0';
        //                 cash-=a;
        //             }
        //         }
        //     }
        // }
    }
    else
    {
        heapSort(s,n,cash,a);
        // for(int i=0;i<n;i++)
        // {
        //     if(cash>=a&&s[i]=='1')
        //     {
        //         for(int j=i+1;j<n-1;j++)
        //         {
        //             if(s[j]=='0')
        //             {
        //                 s[j]='1';
        //                 s[i]='0';
        //                 cash-=a;
        //             }
        //         }
        //     }
        // }
        cout<<s<<endl;;
        for(int i=0;i<n;i++)
            {
                if(cash>=b&&s[i]=='1')
                {
                    s[i]='0';
                    cash-=b;                
                }
                //cout<<s<<endl;
            }
    }
    int out=0;
    //cout<<s<<endl;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            (out=((out<<1)%mod+1))%mod;
            //cout<<out<<endl;
        }
    }
    cout<<out<<endl;

    return 0;
}