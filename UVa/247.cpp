#include <bits/stdc++.h>

#define MAX 26

int N, size, graph[MAX][MAX], visited[MAX];
std::string names[MAX];
std::map<std::string, int> map_names;

void find_scc() {
    for (int i = 1; i <= N; i++) graph[i][i] = 1;

    for (int k = 1; k <= N; k++)
        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= N; j++)
                if (graph[i][k] && graph[k][j]) graph[i][j] = 1;
}

void print_circles() {
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            int c = 0;
            for (int j = 1; j <= N; j++) {
                if (!visited[j] && graph[i][j] && graph[j][i]) {
                    visited[i] = visited[j] = 1;
                    if (c) std::cout << ", ";
                    std::cout << names[j];
                    c++;
                }
            }
            std::cout << "\n";
        }
    }
}

int main() {
    int m, counter = 1;
    std::string n1, n2;

    while ((std::cin >> N >> m) && (N | m)) {
        memset(graph, 0, sizeof(graph));
        memset(visited, 0, sizeof(visited));
        map_names.clear();
        size = 0;

        for (int i = 0; i < m; i++) {
            std::cin >> n1 >> n2;
            int p1 = map_names[n1], p2 = map_names[n2];
            if (p1 == 0)
                size++, map_names[n1] = p1 = size, names[size] = n1;
            if (p2 == 0)
                size++, map_names[n2] = p2 = size, names[size] = n2;
            graph[p1][p2] = 1;
        }

        find_scc();

        if (counter != 1) std::cout << "\n";
        std::cout << "Calling circles for data set " << counter++ << ":\n";
        print_circles();
    }

    return 0;
}
