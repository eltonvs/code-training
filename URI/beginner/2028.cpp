#include <iostream>

int main() {
    unsigned n, count = 1;
    while (std::cin >> n) {
        int tot = n*(n + 1)/2 + 1;
        std::cout << "Caso " << count << ": "
                  << tot << " numero" << (tot == 1 ? "\n" : "s\n");
        for (auto i(0u), j(0u); i <= n; i++, j = 0)
            do {
                std::cout << i << (++j >= i && i == n ? "\n" : " ");
            } while (j < i);
        std::cout << "\n";
        count++;
    }

    return 0;
}
