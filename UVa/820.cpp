#include <bits/stdc++.h>

#define MAX 101

int graph[MAX][MAX];
int rgraph[MAX][MAX];
int visited[MAX];
int parent[MAX];
int N;

bool bfs(int s, int t) {
    memset(visited, 0, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    std::queue<int> Q;
    Q.push(s);
    visited[s] = 1;
    bool stop = false;

    while (!Q.empty() && !stop) {
        int v = Q.front();
        Q.pop();
        for (int i = 1; i <= N; ++i) {
            if (!visited[i] && rgraph[v][i] > 0) {
                Q.push(i);
                visited[i] = 1;
                parent[i] = v;
                if (i == t) {
                    stop = true;
                    break;
                }
            }
        }
    }

    return visited[t];
}

int ford_fulkerson(int src, int sink) {
    int max_flow = 0;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            rgraph[i][j] = graph[i][j];
        }
    }

    while (bfs(src, sink)) {
        int v = sink, p;
        int flow = INT_MAX;
        while (v != src) {
            p = parent[v];
            flow = std::min(rgraph[p][v], flow);
            v = p;
        }
        v = sink;
        while (v != src) {
            p = parent[v];
            rgraph[p][v] -= flow;
            rgraph[v][p] += flow;
            v = p;
        }
        max_flow += flow;
    }

    return max_flow;
}

int main() {
    int s, t, c, x, y, z, cc = 1;

    while (std::cin >> N && N) {
        memset(graph, 0, sizeof(graph));
        std::cin >> s >> t >> c;
        for (int i = 0; i < c; ++i) {
            std::cin >> x >> y >> z;
            graph[x][y] += z;
            graph[y][x] += z;
        }

        std::cout << "Network " << cc++ << "\nThe bandwidth is " << ford_fulkerson(s, t) << ".\n\n";
    }

    return 0;
}
