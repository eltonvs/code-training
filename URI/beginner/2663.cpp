#include <bits/stdc++.h>

int main() {
    int N, K, tmp;
    std::vector<int> competitors;

    std::cin >> N >> K;

    for (int i = 0; i < N; i++) {
        std::cin >> tmp;
        competitors.push_back(tmp);
    }

    if (N != K) {
        std::sort(competitors.begin(), competitors.end());
        while (K < N && competitors[N - K - 1] == competitors[N - K]) K++;
    }

    std::cout << K << "\n";

    return 0;
}
