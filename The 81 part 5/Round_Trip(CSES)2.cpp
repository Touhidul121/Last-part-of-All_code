#include<bits/stdc++.h>
using namespace std;

#define maxN 100001
int n,m;

vector<int>adj[maxN];
int vis[maxN];
vector<int>parent(maxN,-1);

int cycle_start,cycle_end;

bool dfs(int node,int par)
{
    vis[node]=1;
    for(int child:adj[node])
    {
        if(child==par)continue;
        if(vis[child]==0)
        {
            parent[child]=node;
            if(dfs(child,node))
            return true;
        }
        else if(vis[child]==1)
        {
            cycle_end=node;
            cycle_start=child;
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin>>n>>m;
    cycle_start=-1;
    int a,b;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            if(dfs(i,-1)==true)
                break;
        }
    }
    if(cycle_start==-1)
        cout<<"IMPOSSIBLE"<<"\n";
    else
    {
        vector<int>v;
        v.push_back(cycle_start);
        while(cycle_end!=cycle_start)
        {
            v.push_back(cycle_end);
            cycle_end=parent[cycle_end];
        }
        v.push_back(cycle_start);
        reverse(v.begin(),v.end());
        cout<<v.size()<<"\n";
        for(int x:v)
            cout<<x<<" ";
    }

}
