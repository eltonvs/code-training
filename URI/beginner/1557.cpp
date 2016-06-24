#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int n;

    while (std::cin >> n && n) {
        int max_w = std::to_string(1 << 2*(n - 1)).size();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                std::cout << std::setw(max_w) << (1 << (i + j)) << (j == n - 1 ? "\n" : " ");
        std::cout << "\n";
    }

    return 0;
}
