#include <iostream>

int main() {
    int n, tmp, m[] = {0, 0, 0, 0};

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        for (int i = 0; i < 4; i++)
            if (tmp%(i + 2) == 0) m[i]++;
    }

    for (int i = 0; i < 4; i++)
        std::cout << m[i] << " Multiplo(s) de " << i + 2 << "\n";

    return 0;
}
