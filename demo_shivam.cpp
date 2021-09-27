#include <bits/stdc++.h>
using namespace std;
//#define int long long

signed main()
{
    string s;
    getline(cin,s);
    s+=" ";
    istringstream ss(s);
    unordered_set<string> tot;
    
        string wrd="";
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]!=' ')
            wrd+=s[i];
        
           else
           {
            if(tot.find(wrd)==tot.end())
            {
            cout<<wrd<<" ";
            tot.insert(wrd);
            }
            //cout<<wrd<<" ";
            wrd="";
           }
        }
    
    return 0;
    
}