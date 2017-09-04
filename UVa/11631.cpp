#include <bits/stdc++.h>

#define MAX 200010

struct Node {
    int ini, end, dis;
    Node(int i = -1, int e = -1, int d = 0) : ini(i), end(e), dis(d) {}
};

struct Comparator {
    inline bool operator()(const Node &n1, const Node &n2) {
        return n1.dis < n2.dis;
    }
};

Node graph[MAX];
int parent[MAX];
int size[MAX];
int tot_cost, new_cost;

int get_parent(int v) {
    return (parent[v] == v) ? v : parent[v] = get_parent(parent[v]);
}

int main() {
    int n, m;

    while ((std::cin >> m >> n) && (m | n)) {
        tot_cost = new_cost = 0;

        for (int i = 0; i < n; i++) {
            std::cin >> graph[i].ini >> graph[i].end >> graph[i].dis;
            tot_cost += graph[i].dis, parent[i] = i, size[i] = 1;
        }

        parent[n] = n;
        size[n] = 1;

        std::sort(graph, graph + n, Comparator());

        int curr = m - 1;

        for (int i = 0; i < n && curr; i++) {
            int u = get_parent(graph[i].ini);
            int v = get_parent(graph[i].end);
            if (u != v) {
                if (size[u] > size[v]) std::swap(u, v);
                size[v] += size[u], parent[u] = v,
                new_cost += graph[i].dis, curr--;
            }
        }

        std::cout << tot_cost - new_cost << "\n";
    }

    return 0;
}
