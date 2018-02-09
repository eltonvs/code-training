#include <bits/stdc++.h>

#define MAX_BS 105
#define MAX_PAWNS 20

int horse, t;
int pawns_p[MAX_BS][MAX_BS], dp[16][1 << 16];
int graph[MAX_PAWNS][MAX_PAWNS], d[MAX_BS][MAX_BS];
char board[MAX_BS][MAX_BS];
std::pair<int, int> pawns[MAX_PAWNS];

void bfs(std::pair<int, int> s) {
    int ini_x = s.first, ini_y = s.second;
    memset(d, -1, sizeof(d));
    d[ini_x][ini_y] = 0;

    std::queue<std::pair<int, int>> Q;
    Q.push(s);
    while (!Q.empty()) {
        auto u = Q.front();
        Q.pop();

        int x = u.first, y = u.second;
        if (pawns_p[x][y] != -1) {
            graph[pawns_p[ini_x][ini_y]][pawns_p[x][y]] = d[x][y];
        }
        for (int d_x = -2; d_x <= 2; ++d_x) {
            for (int d_y = -2; d_y <= 2; ++d_y) {
                int xx = x + d_x, yy = y + d_y;
                if (abs(d_x) + abs(d_y) == 3 && board[xx][yy] == '.' && d[xx][yy] == -1) {
                    d[xx][yy] = d[x][y] + 1;
                    Q.push(std::pair<int, int>(xx, yy));
                }
            }
        }
    }
}

int tsp(int u, int m) {
    if (m == ((1 << t) - 1)) {
        return graph[u][horse];
    } else if (dp[u][m] != -1) {
        return dp[u][m];
    }
    int min_dist = INT_MAX;
    for (int i = 0; i < t; ++i) {
        if ((m >> i) & 1) {
            continue;
        }
        min_dist = std::min(min_dist, tsp(i, (m | (1 << i))) + graph[u][i]);
    }

    return dp[u][m] = min_dist;
}

int main() {
    int n, m, k, ans;

    while (std::cin >> n >> m >> k && (n | m | k)) {
        memset(board, '#', sizeof(board));
        memset(pawns_p, -1, sizeof(pawns_p));
        memset(dp, -1, sizeof(dp));
        t = 0;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                std::cin >> board[i][j];

                if (board[i][j] == 'P' || board[i][j] == 'C') {
                    if (board[i][j] == 'C') {
                        horse = t;
                    }
                    board[i][j] = '.';
                    pawns[pawns_p[i][j] = t++] = std::pair<int, int>(i, j);
                }
            }
        }

        for (int i = 0; i < t; ++i) {
            bfs(pawns[i]);
        }

        ans = tsp(horse, 1 << horse);
        std::cout << ans << "\n";
    }

    return 0;
}
