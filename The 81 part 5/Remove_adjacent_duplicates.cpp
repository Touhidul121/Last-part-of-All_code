#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s,ans="";
    cin>>s;

    int i=0;
    int n=s.size();
    while(i<n)
    {
        if(s[i]!=s[i+1])
        {
            ans+=s[i];
            i++;
        }
        else if(i+1<n && s[i]==s[i+1])
        {
            while(i+1<n && s[i]==s[i+1])
                i++;
               i++;
        }
    }
    cout<<ans<<"\n";
}
