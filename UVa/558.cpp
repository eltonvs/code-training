#include <bits/stdc++.h>

#define MAX 1005

int graph_values[MAX][MAX];

bool find_negative_cycles(std::vector<int> graph[], int size, int source) {
    long distances[size];
    for (int i = 0; i < size; ++i) {
        distances[i] = INT_MAX;
    }
    distances[source] = 0;

    for (int i = 0; i < size - 1; ++i) {
        // Do Belmann-Ford
        for (int u = 0; u < size; ++u) {
            for (auto v : graph[u]) {
                long n_d = distances[u] + graph_values[u][v];
                if (distances[v] > n_d) {
                    distances[v] = n_d;
                }
            }
        }
    }

    for (int u = 0; u < size; ++u) {
        for (auto v : graph[u]) {
            long n_d = distances[u] + graph_values[u][v];
            if (distances[v] > n_d) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int c, n, m, x, y, t;

    std::cin >> c;

    while (c--) {
        std::cin >> n >> m;
        std::vector<int> graph[n];
        for (int i = 0; i < m; ++i) {
            std::cin >> x >> y >> t;
            graph[x].push_back(y);
            graph_values[x][y] = t;
        }

        std::cout << (find_negative_cycles(graph, n, 0) ? "not possible" : "possible") << "\n";
    }

    return 0;
}
