#include <bits/stdc++.h>

#define MAX 101
int set1[MAX], set2[MAX], matches[MAX + MAX], visited[MAX + MAX];
std::vector<int> joined_sets[MAX];

int augmenting_path(int u) {
    if (!visited[u]) {
        visited[u] = 1;
        for (int v : joined_sets[u]) {
            if (matches[v] == -1 || augmenting_path(matches[v])) {
                matches[v] = u;
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int c, n, m, ini_n, ans = 0;
    std::cin >> c;

    for (int cc = 1; cc <= c; ++cc) {
        std::cin >> n;
        memset(matches, -1, sizeof(matches));
        for (int i = 0; i < MAX; ++i) {
            joined_sets[i].clear();
        }
        for (int i = 0; i < n; ++i) {
            std::cin >> set1[i];
        }
        std::cin >> m;
        for (int i = 0; i < m; ++i) {
            std::cin >> set2[i];
        }

        ini_n = n;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (set2[j] == 0 || (set1[i] != 0 && set2[j]%set1[i] == 0)) {
                    joined_sets[i].push_back(j + n);
                }
            }
        }

        ans = 0;
        for (int i = 0; i < ini_n; ++i) {
            memset(visited, 0, sizeof(visited));
            ans += augmenting_path(i);
        }

        std::cout << "Case " << cc << ": " << ans << "\n";
    }
    return 0;
}
