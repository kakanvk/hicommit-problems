#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, cost;
};

int find(int u, vector<int>& parent) {
    if (u != parent[u]) {
        parent[u] = find(parent[u], parent);
    }
    return parent[u];
}

void unionSets(int u, int v, vector<int>& parent, vector<int>& rank) {
    u = find(u, parent);
    v = find(v, parent);
    if (u != v) {
        if (rank[u] < rank[v]) {
            swap(u, v);
        }
        parent[v] = u;
        if (rank[u] == rank[v]) {
            rank[u]++;
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<Edge> edges(M);
    
    for (int i = 0; i < M; i++) {
        int u, v, c, r;
        cin >> u >> v >> c >> r;
        edges[i] = {u - 1, v - 1, c + r};
    }

    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.cost < b.cost;
    });

    vector<int> parent(N), rank(N, 0);
    for (int i = 0; i < N; i++) {
        parent[i] = i;
    }

    int totalCost = 0;
    vector<Edge> mst;

    for (Edge e : edges) {
        if (find(e.u, parent) != find(e.v, parent)) {
            unionSets(e.u, e.v, parent, rank);
            totalCost += e.cost;
            mst.push_back(e);
        }
    }

    for (Edge e : mst) {
        cout << e.u + 1 << " " << e.v + 1 << endl;
    }
    cout << totalCost << endl;

    return 0;
}
