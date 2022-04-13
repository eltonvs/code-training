#include <iostream>

int main() {
    int h1, m1, h2, m2;

    while (std::cin >> h1 >> m1 >> h2 >> m2 && (h1 || m1 || h2 || m2)) {
        if (m2 < m1) m2 += 60, h2--;
        if (h2 < h1) h2 += 24;
        std::cout << (h2 - h1)*60 + (m2 - m1) << "\n";
    }

    return 0;
}
