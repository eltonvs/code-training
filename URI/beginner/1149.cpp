#include <iostream>

int main() {
    int a, n;

    while (std::cin >> a) {
        do {
            std::cin >> n;
        } while (n <= 0);
        std::cout << a*n + (n*(n - 1)/2) << "\n";
    }

    return EXIT_SUCCESS;
}
