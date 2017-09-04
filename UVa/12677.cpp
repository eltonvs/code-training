#include <bits/stdc++.h>

#define MAX 40005

std::vector<int> gn[MAX], gq[MAX];
int visited[MAX], dq[MAX], dn[MAX];
long long F[MAX];

std::pair<int, int> extremes(std::vector<int> g[]) {
    std::queue<int> Q;
    int v = 0, u;
    for (int ii = 0; ii < 2; ii++) {
        memset(visited, 0, sizeof(visited));
        u = v;
        Q.push(v);  // Add first city to queue

        while (!Q.empty()) {
            v = Q.front();
            Q.pop();
            visited[v] = 1;
            for (auto i : g[v])
                if (!visited[i]) Q.push(i);
        }
    }
    return std::make_pair(u, v);
}

void filln(int v) {
    memset(visited, -1, sizeof(visited));
    std::queue<int> Q;
    Q.push(v);
    visited[v] = 0;

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();
        dn[u] = std::max(dn[u], visited[u]);
        for (auto i : gn[u]) {
            if (visited[i] == -1) {
                Q.push(i);
                visited[i] = visited[u] + 1;
            }
        }
    }
}

void fillq(int v) {
    memset(visited, -1, sizeof(visited));
    std::queue<int> Q;
    Q.push(v);
    visited[v] = 0;

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();
        dq[u] = std::max(dq[u], visited[u]);
        for (auto i : gq[u]) {
            if (visited[i] == -1) {
                Q.push(i);
                visited[i] = visited[u] + 1;
            }
        }
    }
}

void fill_distances() {
    memset(dn, 0, sizeof(dn));
    memset(dq, 0, sizeof(dq));

    auto en = extremes(gn), eq = extremes(gq);

    filln(en.first);
    filln(en.second);

    fillq(eq.first);
    fillq(eq.second);
}

int main() {
    int N, Q, a, b;

    while (std::cin >> N >> Q) {
        // Clear Graphs
        for (int i = 0; i < MAX; i++) {
            gn[i].clear();
            gq[i].clear();
        }

        for (int i = 0; i < N - 1; i++) {
            std::cin >> a >> b;
            gn[--a].push_back(--b);
            gn[b].push_back(a);
        }
        for (int i = 0; i < Q - 1; i++) {
            std::cin >> a >> b;
            gq[--a].push_back(--b);
            gq[b].push_back(a);
        }

        fill_distances();

        long long int sn = 0, sq = 0, d = 0;
        int mnq = 0;

        for (int i = 0; i < N; i++)
            sn += dn[i], mnq = std::max(mnq, dn[i]);

        std::sort(dq, dq + Q);
        for (int i = 0; i < Q; i++)
            sq += dq[i], mnq = std::max(mnq, dq[i]);

        F[Q - 1] = dq[Q - 1];
        for (int i = Q - 2; i >= 0; i--)
            F[i] = dq[i] + F[i + 1];

        for (int i = 0; i < N; i++) {
            int id = std::lower_bound(dq, dq + Q, mnq - (dn[i] + 1)) - dq;
            d += (long long) mnq * id;
            if (id < Q)
                d += F[id] + (dn[i] + 1) * (long long)(Q - id);
        }

        printf("%.3lf\n", (double)d/((long long)N*Q));
    }

    return 0;
}
