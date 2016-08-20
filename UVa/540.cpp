#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <list>

int main() {
    int n, c = 1;
    int map[1000000];
    int t_map[1001];
    std::string line;

    while (std::cin >> n && n) {
        auto ini = 0u;
        memset(t_map, -1, sizeof(t_map));
        std::vector<std::queue<int> > final_queue;
        for (int i = 0; i < n; i++) {
            int nt, tmp;
            std::cin >> nt;
            while (nt--) {
                std::cin >> tmp;
                map[tmp] = i;
            }
        }
        std::cout << "Scenario #" << c++ << std::endl;
        std::cin.ignore();
        while(std::getline(std::cin, line) && line != "STOP") {
            if (line[0] == 'E') {
                int p = std::stoi(line.substr(8));
                if (t_map[map[p]] == -1) {
                    // Update the t_map value
                    t_map[map[p]] = final_queue.size();
                    final_queue.push_back(std::queue<int>());
                }
                // Just append the friend on team position
                final_queue[t_map[map[p]]].push(p);
            } else {
                if (ini < final_queue.size()) {
                    int t = final_queue[ini].front();
                    final_queue[ini].pop();
                    if (final_queue[ini].empty())
                        ini++, t_map[map[t]] = -1;
                    std::cout << t << std::endl;
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
