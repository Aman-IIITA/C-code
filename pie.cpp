#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> req(26);
    vector<int> have(26);
    for(int i=0;i<s.size();i++)
    {
        if(i&1)
        {
            
            req[s[i]-'A']+=1-min(1,have[s[i]-'A']--);
            have[s[i]-'A']=max(0,have[s[i]-'A']);
            //cout<<s[i]<<" "<<req[s[i]-'A']<<endl;
        }
        else
        have[s[i]-'a']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++)
    cnt+=req[i];
    cout<<cnt<<endl;
}