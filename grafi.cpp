#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <climits>
using namespace std;
typedef long long ll;

#define INF INT_MAX

// Non modificare le cose sopra

// dfs ricorsiva
void dfs (int i, vector<bool> &visitato, vector<vector<pair<int,int>>> &adj) {
    visitato[i] = true;
    for (auto [j,w] : adj[i]) {
        if (visitato[j] == false) {
            dfs(j, visitato, adj);
        }
    }
}

int main() {

    int n,m; // nodi, archi
    cin >> n >> m;

    vector<vector<pair<int,int>>> adj; // lista di adiacenza con archi pesati

    for (int i = 0; i < m; i++) {
        // peso solo se il grafo è pesato
        int da, a, peso;
        cin >> da >> a >> peso;

        adj[da].push_back({a,peso});
        // se gli archi non sono direzionati:
        adj[a].push_back({da,peso});
    }

    { // bfs
        vector<bool> visitato(n,false);
        queue<int> q;
        q.push(0);
        visitato[0] = true;
        while (q.empty() == false) {
            int i = q.front();
            q.pop();

            // faccio cose sul nodo i

            for (auto [j,w] : adj[i]) {
                if (visitato[j] == false) {
                    visitato[j] = true;
                    q.push(j);
                }
            }
        }
    }

    { // dfs iterativa
        vector<bool> visitato(n,false);
        stack<int> s;
        s.push(0);
        visitato[0] = true;
        while (s.empty() == false) {
            int i = s.top();
            s.pop();

            // faccio cose sul nodo i

            for (auto [j, w] : adj[i]) {
                if (visitato[j] == false) {
                    visitato[j] = true;
                    s.push(j);
                }
            }
        }
    }

    { // dijkstra
        int start = 0;
        vector<int> dst(n,INF);
        priority_queue<pair<int,int>> pq;
        pq.push({0, start});
        dst[start] = 0;
        vector<bool> def(n, 0);
        while (!pq.empty()) {
            auto [d, i] = pq.top();
            pq.pop();
            d =- d; // i pesi sono negativi così ordino per minore
            if (def[i]) continue;
            def[i] = 1;
            for (auto [j, w] : adj[i]) {
                if (d + w < dst[j]) {
                    dst[j] = d + w;
                    pq.push({-dst[j], j});
                }
            }
        }
        // d contiene le distanze minime da start a ciascun nodo
    }

    return 0;
}