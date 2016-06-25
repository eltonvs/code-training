#include <iostream>

int safe_position(int n, int k) {
    return n == 1 ? 0 : (safe_position(n - 1, k) + k)%n;
}

int main() {
    int n;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int m, k;

        std::cin >> m >> k;

        std::cout << "Case " << i + 1 << ": " << safe_position(m, k) + 1 << "\n";
    }

    return 0;
}
