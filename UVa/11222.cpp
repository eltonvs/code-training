#include <bits/stdc++.h>

int main() {
    int n, count = 1;
    int others[3][2] = {{1, 2}, {0, 2}, {0, 1}};

    std::cin >> n;

    while (n--) {
        int tmp, u[3] = {0, 0, 0}, k = 0;
        std::set<int> friends[3];
        std::set<int> unique[3];

        for (int i = 0; i < 3; i++) {
            int k;
            std::cin >> k;
            for (int j = 0; j < k; j++) {
                std::cin >> tmp;
                friends[i].insert(tmp);
            }
        }

        for (int i = 0; i < 3; i++) {
            for (auto it = friends[i].begin(); it != friends[i].end(); it++) {
                if (friends[others[i][0]].find(*it) == friends[others[i][0]].end() && friends[others[i][1]].find(*it) == friends[others[i][1]].end())
                    unique[i].insert(*it);
            }
        }

        int max = std::max(unique[0].size(), std::max(unique[1].size(), unique[2].size()));
        for (int i = 0; i < 3; i++) {
            if (max == unique[i].size())
                u[k++] = i + 1;
        }

        int l = 0;
        std::cout << "Case #" << count++ << ":\n";
        while (u[l] && l < 3) {
            std::cout << u[l] << " " << unique[u[l] - 1].size();
            for (auto it = unique[u[l] - 1].begin(); it != unique[u[l] - 1].end(); it++) {
                std::cout << " " << *it;
            }
            std::cout << "\n";
            l++;
        }

    }

    return 0;
}
