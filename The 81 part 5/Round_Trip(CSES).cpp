#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
int n,m;
vector<int> adj[maxN];
vector<int> color(maxN,0);
vector<int> parent(maxN,-1);
int cycle_start, cycle_end;

bool dfs(int v, int par) { // passing vertex and its parent vertex
    color[v] = 1;
    for (int u : adj[v]) {
        if(u == par) continue; // skipping edge to parent vertex
        if (color[u] == 0) {
            parent[u] = v;
            if (dfs(u, parent[u]))
                return true;
        } else if (color[u] == 1) {
            cycle_end = v;
            cycle_start = u;
            return true;
        }
    }
    color[v] = 2;
    return false;
}

int main() {
    cin>>n>>m;

    cycle_start = -1;
    int a,b;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        --a, --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int v = 0; v < n; v++) {
        if (color[v] == 0 && dfs(v, parent[v]))
            break;
    }

    if (cycle_start == -1) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        vector<int> cycle;
        cout<<cycle_start<<"\n";
        cycle.push_back(cycle_start);
        for (int v = cycle_end; v != cycle_start; v = parent[v])
            cycle.push_back(v);
        cycle.push_back(cycle_start);
        reverse(cycle.begin(), cycle.end());

        cout <<cycle.size()<<"\n";
        for (int v : cycle)
            cout << v+1 << " ";
        cout << endl;
    }
}
