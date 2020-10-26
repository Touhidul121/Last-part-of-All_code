#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
int n,m;
vector<int> adj[maxN];
vector<int>vis(maxN,0);
vector<int> parent(maxN,-1);
int cycle_start, cycle_end;

bool dfs(int node, int par) {
    vis[node] = 1;
    for (int child : adj[node]) {
        if(child == par) continue;
        if (vis[child] == 0) {
            parent[child] = node;
            if (dfs(child, node))
                return true;
        } else if (vis[child] == 1) {
            cycle_end = node;
            cycle_start = child;
            return true;
        }
    }

    return false;
}

int main() {
    cin>>n>>m;

    cycle_start = -1;
    int a,b;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        //--a, --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int v = 1; v <=n; v++) {
        if (vis[v] == 0){
           if(dfs(v,-1)==true)
            break;
        }
    }

    if (cycle_start == -1) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        vector<int> cycle;

        cycle.push_back(cycle_start);

        for (int v = cycle_end; v != cycle_start; v = parent[v])
            cycle.push_back(v);

        cycle.push_back(cycle_start);

        reverse(cycle.begin(), cycle.end());

        cout <<cycle.size()<<"\n";
        for (int v : cycle)
            cout << v << " ";
        cout << endl;
    }
}

