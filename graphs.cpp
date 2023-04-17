#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF LLONG_MAX/2
#define endl '\n'
#define int ll

// Non modificare le cose sopra

void readUnweightedGraph (int n,int m,vector<vector<int>> &adj,bool directed=0) {
    // legge un grafo non pesato
    // prende numero di nodi, numero di archi, lista di adiacenza;
    // mettere 1 come ultimo parametro se il grafo è direzionato
    adj.clear();
    adj.resize(n);
    while (m--) {
        int a,b; 
        cin >> a >> b;
        adj[a].push_back(b);
        if (!directed) adj[b].push_back(a);
    }
    return;
}

void readWeightedGraph (int n,int m,vector<vector<pair<int,int>>> &adj,bool directed=0) {
    // legge un grafo pesato
    // prende numero di nodi, numero di archi, lista di adiacenza;
    // mettere 1 come ultimo parametro se il grafo è direzionato
    adj.clear();
    adj.resize(n);
    while (m--) {
        int a,b,w; 
        cin >> a >> b >> w;
        adj[a].push_back({b,w});
        if (!directed) adj[b].push_back({a,w});
    }
    return;
}

void dfs(int v,vector<bool> &vis,vector<vector<int>> adj) {
    // dfs su un grafo non pesato
    vis[v]=1;
    for (auto u:adj[v]) {
        if (!vis[u]) {
            dfs(u,vis,adj);
        }
    }
}

int shortestPath (int n,vector<vector<pair<int,int>>> &adj,int start,int end) {
    // restituisce il percorso di peso minimo tra start e end;
    // -1 se end non è raggiungibile da start
    vector<int> dst(n,INF);
    priority_queue<pair<int,int>> q;
    q.push({0,start});
    dst[start]=0;
    vector<bool> used (n,0);
    while (!q.empty()) {
        auto [w,v]=q.top();
        q.pop();
        w=-w;
        if (v==end) return w;
        if (used[v]) continue;
        used[v]=1;
        for (auto u:adj[v]) {
            if (w+u.second<dst[u.first]) {
                dst[u.first]=w+u.second;
                q.push({-dst[u.first],u.first});
            }
        }
    }
    return -1;
}

signed main() {

    // Codice di esempio
    // problema "dijkstra" da training.olinfo
    
    freopen ("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin >> n >> m;
    int s,e;
    cin >> s >> e;
    vector<vector<pair<int,int>>> adj;
    readWeightedGraph(n+1,m,adj,1); // n+1 per indici 1-based
    
    cout << shortestPath(n+1,adj,s,e) << endl;


    return 0;
}