#include <bits/stdc++.h>

#define MAX 26

std::map<char, int> in_degrees;
std::map<char, int> out_degrees;
int graph[MAX][MAX];
int visited[MAX];

void dfs_visit(int u) {
    for (int i = 0; i < MAX; ++i) {
        if (graph[u][i] && !visited[i]) {
            visited[i] = 1;
            dfs_visit(i);
        }
    }
}

bool dfs(int u) {
    memset(visited, 0, sizeof(visited));
    dfs_visit(u);

    for (int i = 0; i < MAX; ++i) {
        if (!visited[i]) {
            for (int j = 0; j < MAX; ++j) {
                if (graph[i][j]) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    int N, n, st;
    std::string word;

    std::cin >> N;

    while (N--) {
        in_degrees.clear();
        out_degrees.clear();
        memset(graph, 0, sizeof(graph));

        std::cin >> n;

        for (int i = 0; i < n; ++i) {
            std::cin >> word;
            char last = word.back();
            char init = word.front();
            ++in_degrees[last];
            ++out_degrees[init];
            graph[last - 'a'][init - 'a'] = graph[init - 'a'][last - 'a'] = 1;
        }
        st = word.front() - 'a';

        bool i1 = false, o1 = false, ans = dfs(st);
        for (char i = 'a'; i <= 'z' && ans; ++i) {
            if (in_degrees[i] - out_degrees[i] == 1) {
                if (i1) {
                    ans = false;
                }
                i1 = true;
            } else if (out_degrees[i] - in_degrees[i] == 1) {
                if (o1) {
                    ans = false;
                }
                o1 = true;
            } else if (out_degrees[i] != in_degrees[i]) {
                ans = false;
            }
        }

        std::cout << (ans ? "Ordering is possible." : "The door cannot be opened.") << "\n";
    }

    return 0;
}
