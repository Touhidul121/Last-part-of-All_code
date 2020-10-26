#include<bits/stdc++.h>
using namespace std;
bool vis[10001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,ans="";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(vis[s[i]-'a']==0)
        {
            ans+=s[i];
            vis[s[i]-'a']++;
        }
    }
    cout<<ans<<"\n";
}
