#include <bits/stdc++.h>

#define MAX 250

int graph_values[MAX][MAX];

int bellman_ford(std::vector<int> graph[], int size, int s, int d) {
    long int distances[size];
    for (int i = 0; i < size; ++i) {
        distances[i] = INT_MAX;
    }
    distances[s] = 0;

    for (int i = 0; i < size - 1; ++i) {
        for (int u = 0; u < size; ++u) {
            for (auto v : graph[u]) {
                long int n_d = distances[u] + graph_values[u][v];
                if (distances[v] > n_d) {
                    distances[v] = n_d;
                }
            }
        }
    }
    return distances[d];
}

int main() {
    int n, m, c, k, u, v, p;

    while (std::cin >> n >> m >> c >> k && (n | m | c | k)) {
        memset(graph_values, sizeof(graph_values), 0);
        std::vector<int> graph[n];
        for (int i = 0; i < m; ++i) {
            std::cin >> u >> v >> p;
            graph[u].push_back(v);
            graph[v].push_back(u);
            graph_values[u][v] = graph_values[v][u] = p;
        }
        for (int i = 0; i < c - 1; ++i) {
            if (graph_values[i][i + 1]) {
                graph[i].clear();
                graph[i].push_back(i + 1);
            }
        }
        int ans = bellman_ford(graph, n, k, c - 1);
        std::cout << ans << "\n";
    }

    return 0;
}
