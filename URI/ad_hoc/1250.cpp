#include <iostream>

int main() {
    int n;
    std::string jumps;

    std::ios::sync_with_stdio(false);

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int t, hits = 0;
        std::cin >> t;
        int vet[t];

        for (int i = 0; i < t; i++)
            std::cin >> vet[i];
        std::cin.ignore();

        std::getline(std::cin, jumps);
        for (auto i(0u); i < t; i++)
            if (vet[i] > 2 && jumps[i] == 'J' || vet[i] <= 2 && jumps[i] == 'S')
                hits++;

        std::cout << hits << "\n";
    }

    return 0;
}
