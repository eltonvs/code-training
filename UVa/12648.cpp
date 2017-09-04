#include <bits/stdc++.h>

#define MAX 505

int visited[MAX], ages[MAX];
std::vector<int> graph[MAX], bosses[MAX];

void dfs(int v, int e) {
    visited[v] = 1;
    bosses[e].push_back(v);

    for (auto i : bosses[v]) {
        if (!visited[i]) dfs(i, e);
    }
}

int main() {
    int N, M, I, x, y, e, ans;
    char cmd[5];

    while (std::cin >> N >> M >> I) {
        for (int i = 1; i <= N; i++) {
            std::cin >> ages[i];
            graph[i].clear();
            bosses[i].clear();
        }

        for (int i = 0; i < M; i++) {
            std::cin >> x >> y;
            graph[y].push_back(x);
        }

        int managed[MAX];
        for (int i = 1; i <= N; i++) {
            memset(visited, 0, sizeof(visited));
            managed[i] = i;
            visited[i] = 1;

            for (auto j : graph[i])
                if (!visited[j]) dfs(j, i);
        }

        for (int i = 0; i < I; i++) {
            std::cin >> cmd;
            if (cmd[0] == 'P') {
                std::cin >> e;
                ans = INT_MAX;
                e = managed[e];

                for (auto j : bosses[e])
                    ans = std::min(ans, ages[j]);

                if (ans == INT_MAX) {
                    std::cout << "*\n";
                } else {
                    std::cout << ans << "\n";
                }
            } else {
                std::cin >> x >> y;
                std::swap(ages[managed[x]], ages[managed[y]]);
                std::swap(managed[x], managed[y]);
            }
        }
    }

    return 0;
}
