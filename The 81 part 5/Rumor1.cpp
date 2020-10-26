#include<bits/stdc++.h>
using namespace std;
#define maxN 100001

vector<int>adj[maxN];
int vis[maxN],cost[maxN];

long long ans;
int mn=INT_MAX;
void dfs(int node)
{
 vis[node]=1;
   if(mn>cost[node])mn=cost[node];

   for(int child:adj[node])
    if(!vis[child])
    dfs(child);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>cost[i];

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            ans+=mn;
            mn=INT_MAX;
        }
    }
    cout<<ans<<"\n";
}
