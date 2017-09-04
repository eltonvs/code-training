#include <bits/stdc++.h>

#define MAX 30

std::string word, p_word;
std::map<char, int> m_letters;
char letters[MAX];
int graph[MAX][MAX], visited[MAX], size = 0;

void topological_sort_visit(int v, std::stack<int> &s) {
    visited[v] = 1;
    for (int i = 1; i <= size; i++)
        if (graph[v][i] && !visited[i])
            topological_sort_visit(i, s);
    visited[v] = 2;
    s.push(v);
}

void topological_sort(std::stack<int> &s) {
    memset(visited, 0, sizeof(visited));
    for (int i = 1; i <= size; i++) {
        if (!visited[i]) topological_sort_visit(i, s);
    }
}

int main() {
    while (std::cin >> word) {
        if (word == "#") {
            std::stack<int> st_letters;
            topological_sort(st_letters);
            while (!st_letters.empty()) {
                int l = st_letters.top();
                st_letters.pop();
                std::cout << letters[l];
            }
            std::cout << "\n";
            m_letters.clear();
            size = 0;
            p_word = "";
            memset(graph, 0, sizeof(graph));
        } else {
            for (auto i = 0u; i < word.size(); i++) {
                if (m_letters[word[i]] == 0) {
                    size++, m_letters[word[i]] = size, letters[size] = word[i];
                }
            }
            bool eq = true;
            auto lowest = word.size() < p_word.size() ? word.size() : p_word.size();
            for (auto i = 0u; i < lowest && eq; i++) {
                if (word[i] != p_word[i]) {
                    eq = false;
                }
                if (!eq) {
                    int p1 = m_letters[p_word[i]], p2 = m_letters[word[i]];
                    graph[p1][p2] = 1;
                }
            }
            p_word = word;
        }
    }

    return 0;
}
