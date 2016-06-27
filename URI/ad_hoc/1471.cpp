#include <iostream>

int main() {
    int n, r;

    while (std::cin >> n >> r) {
        int v[n];
        std::fill(v, v + n, 0);
        for (int i = 0, tmp; i < r; i++) {
            std::cin >> tmp;
            v[tmp - 1] = 1;
        }
        if (n == r) {
            std::cout << "*\n";
        } else {
            for (int i = 0; i < n; i++)
                if (v[i] == 0) std::cout << i + 1 << " ";
            std::cout << "\n";
        }
    }

    return 0;
}
