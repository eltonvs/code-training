#include <bits/stdc++.h>

#define MAX 101

int graph[MAX][MAX], color[MAX], ans[MAX];
int n, k, mbn;

bool has_black_neighbors(int u) {
    for (int i = 1; i <= n; ++i) {
        if (graph[i][u] && color[i]) {
            return true;
        }
    }
    return false;
}

void dfs(int c) {
    if (c > n) {
        int cc = 0;
        for (int i = 1; i <= n; ++i) {
            if (color[i]) cc++;
        }
        if (cc > mbn) {
            mbn = cc;
            for (int i = 1, j = 0; i <= n; i++) {
                if (color[i]) ans[j++] = i;
            }
        }
    } else {
        color[c] = 0;
        dfs(c + 1);
        color[c] = 1;
        if (!has_black_neighbors(c)) {
            dfs(c + 1);
        }
        color[c] = 0;
    }
}

int main() {
    int m, x, y;

    std::cin >> m;

    while (m--) {
        std::cin >> n >> k;
        memset(graph, 0, sizeof graph);
        memset(color, 0, sizeof color);
        memset(ans, 0, sizeof ans);
        mbn = 0;
        for (int i = 0; i < k; ++i) {
            std::cin >> x >> y;
            graph[x][y] = graph[y][x] = 1;
        }

        dfs(1);
        std::cout << mbn << std::endl;
        for (int i = 0; i < mbn - 1; i++)
            std::cout << ans[i] << " ";
        std::cout << ans[mbn - 1] << std::endl;
    }

    return 0;
}
