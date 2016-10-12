#include <bits/stdc++.h>

int distance(int a, int b) {
    return abs(a - b);
}

int closest_sum(std::vector<int> &v, int query) {
    int closest = v[0] + v[1], curr;

    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (distance(v[i] + v[j], query) < distance(closest, query))
                closest = v[i] + v[j];
            if (closest == query)
                return closest;
        }
    }

    return closest;
}

int main() {
    int n, m, tmp, c = 1;

    while (std::cin >> n && n) {
        std::cout << "Case " << c++ << ":\n";

        std::vector<int> set;

        for (int i = 0; i < n; i++) {
            std::cin >> tmp;
            set.push_back(tmp);
        }

        std::cin >> m;

        for (int i = 0; i < m; i++) {
            std::cin >> tmp;
            std::cout << "Closest sum to " << tmp << " is " << closest_sum(set, tmp) << ".\n";
        }
    }

    return 0;
}
