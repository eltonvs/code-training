#include <bits/stdc++.h>

int search(std::string &ini, std::string &end, std::map<std::string, std::vector<std::string>> &graph) {
    std::map<std::string, int> visited;
    std::queue<std::string> s;
    s.push(ini);
    visited[ini] = 0;

    while (!s.empty()) {
        std::string top = s.front();
        s.pop();
        if (top == end)
            return visited[top];
        for (auto i = 0u; i < graph[top].size(); i++) {
            if (!visited.count(graph[top][i])) {
                visited[graph[top][i]] = visited[top] + 1;
                s.push(graph[top][i]);
            }
        }
    }
    return -1;
}

int main() {
    int n;
    std::string word, tmp, ini, end, line;

    std::cin >> n;

    while (n--) {
        std::map<std::string, std::vector<std::string>> graph;

        while (std::cin >> word && word != "*") {
            graph[word];
            for (auto it = graph.begin(); it != graph.end(); it++) {
                tmp = it->first;
                int tmp_sz = tmp.size(), diff = 0;
                if (tmp_sz == word.size()) {
                    for (int i = 0; i < tmp_sz && diff < 2; i++) {
                        if (tmp[i] != word[i]) diff++;
                    }
                    if (diff == 1) {
                        graph[tmp].push_back(word);
                        graph[word].push_back(tmp);
                    }
                }
            }
        }

        std::getline(std::cin, line);
        while (getline(std::cin, line) && line.size() != 0) {
            std::stringstream ss(line);
            ss >> ini >> end;
            std::cout << ini << " " << end << " " << search(ini, end, graph) << std::endl;
        }
        if (n != 0) std::cout << std::endl;
    }
    return 0;
}
