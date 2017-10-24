#include <bits/stdc++.h>

#define MAX 101

std::vector<int> graph[MAX];
long distances[MAX][MAX];

void clear_graph() {
    for (int i = 0; i < MAX; i++) {
        graph[i].clear();
    }
}

void floyd_warshall() {
    for (int i = 1; i < MAX; ++i) {
        for (int j = 1; j < MAX; ++j) {
            distances[i][j] = i == j ? 0 : INT_MAX;
        }
        for (auto j : graph[i]) {
            distances[i][j] = 1;
        }
    }
    for (int k = 1; k < MAX; ++k) {
        for (int i = 1; i < MAX; ++i) {
            for (int j = 1; j < MAX; ++j) {
                if (distances[i][j] > distances[i][k] + distances[k][j]) {
                    distances[i][j] = distances[i][k] + distances[k][j];
                }
            }
        }
    }
}

double avg_calc() {
    int sum = 0, c = 0;
    for (int i = 1; i < MAX; ++i) {
        for (int j = 1; j < MAX; ++j) {
            if (distances[i][j] != INT_MAX && distances[i][j] != 0) {
                sum += distances[i][j], c++;
            }
        }
    }

    return ((double)sum)/c;
}

int main() {
    int a, b, c = 1, cc = 0;

    clear_graph();

    while (std::cin >> a >> b) {
        if (!(a | b)) {
            if (cc == 0) {
                break;
            }
            floyd_warshall();
            double ans = avg_calc();
            cc = 0;
            printf("Case %i: average length between pages = %.3f clicks\n", c++, ans);
            // Clear Graphs
            clear_graph();
        } else {
            cc++;
            graph[a].push_back(b);
        }
    }

    return 0;
}
