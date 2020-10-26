#include<bits/stdc++.h>
using namespace std;
vector<int>adj[201];
int vis[201];
int cnt;
void dfs(int node)
{
 vis[node]=1;
 cnt++;
 for(int child:adj[node])
 {
     if(!vis[child])
        dfs(child);
 }
}
int main()
{
    map<string,int>mp;
    int n,f=0;
    cin>>n;
    string s1,s,s2;
    for(int i=1;i<=n;i++)
    {
        cin>>s1>>s>>s2;
        for(int j=0;j<s1.size();j++)
            if(isupper(s1[j]))
            s1[j]=s1[j]-'A'+'a';
        for(int j=0;j<s2.size();j++)
            if(isupper(s2[j]))
            s2[j]=s2[j]-'A'+'a';

            if(mp.count(s1)==0)
            {
                f++;
                mp[s1]=f;

            }
            if(mp.count(s2)==0)
            {
                f++;
                mp[s2]=f;
            }
            adj[mp[s1]].push_back(mp[s2]);

    }
    int ans=1;

    for(int i=1;i<=f;i++)
    {

           cnt=0;
           dfs(i);
           ans=max(ans,cnt);
           memset(vis,0,sizeof(vis));

    }
    cout<<ans<<"\n";

}
