#include <bits/stdc++.h>

#define MAX 101

std::vector<int> graph[MAX];
int color[MAX];

bool is_bipartite() {
	memset(color, -1, sizeof(color));
    std::queue<int> Q;
    Q.push(0);
    color[0] = 0;

    while (!Q.empty()) {
        int v = Q.front();
        Q.pop();

        for (int u : graph[v]) {
            if (color[u] != -1 && color[u] == color[v]) {
                return false;
            } else if (color[u] == -1) {
                color[u] = color[v]^1;
                Q.push(u);
            }
        }
    }

    return true;
}

int main() {
    int N, x, y;
    std::string line;

    while (std::cin >> N && N) {
        for (int i = 0; i < N; ++i) {
            graph[i].clear();
        }
        for (int i = 0; i < N; ++i) {
            std::cin >> x;
            std::cin.ignore();
            std::getline(std::cin, line);
            std::stringstream ss(line);
            while (ss >> y) {
                graph[x - 1].push_back(y - 1);
            }
        }

        std::cout << (is_bipartite() ? "SIM" : "NAO") << "\n";
    }

    return 0;
}
