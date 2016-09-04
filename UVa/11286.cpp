#include <bits/stdc++.h>

int main() {
    int n;

    while (std::cin >> n && n) {
        int tmp;
        std::map<std::set<int>, int> froshes;
        for (int i = 0; i < n; i++) {
            std::set<int> frosh;
            for (int j = 0; j < 5; j++) {
                std::cin >> tmp;
                frosh.insert(tmp);
            }
            auto p = froshes.find(frosh);
            if (p != froshes.end()) {
                p->second++;
            } else {
                froshes.insert(std::pair<std::set<int>, int>(frosh, 1));
            }
        }

        int max_n = 0, max_q = 0;

        for (auto it = froshes.begin(); it != froshes.end(); it++) {
            if (it->second > max_n) {
                max_n = it->second, max_q = 1;
            } else if (it->second == max_n) {
                max_q++;
            }
        }

        std::cout << max_n * max_q << std::endl;
    }

    return 0;
}
