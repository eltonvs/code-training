#include <iostream>

int main() {
    int n;

    while (std::cin >> n) {
        int t = n/3, m = n/2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == m && j == m)
                    std::cout << 4;
                else if (i >= t && i < n - t && j >= t && j < n - t)
                    std::cout << 1;
                else if (i == j)
                    std::cout << 2;
                else if (i == n - j - 1)
                    std::cout << 3;
                else
                    std::cout << 0;
                if (j == n - 1)
                    std::cout << "\n";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
