#include<bits/stdc++.h>
using namespace std;

vector<int>v[1000007];
int vis[1000007];
int a[1000007];
int res=INT_MAX;
 void dfs(int u)
{
    if(!vis[u])
    {
        vis[u]=true;
        res=min(res,a[u-1]);
        for(auto x:v[u])
        {

         if(!vis[x])
            dfs(x);
        }
    }

}

int main()
{
    int n,m,b,c;
    cin>>n>>m;

    for(int i=0;i<n;i++)
        cin>>a[i];

        for(int i=0;i<m;i++){
            cin>>b>>c;
            v[b].push_back(c);
            v[c].push_back(b);
}
        long long sum=0;

        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                res=INT_MAX;

                dfs(i);
                sum+=res;
            }
        }


        cout<<sum<<"\n";
}
