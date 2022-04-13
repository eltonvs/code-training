#include <iostream>

// Possibilities 2, 5, 10, 20, 50, 100
// With 2:  7,   12,  22,  52, 102
// With 5:  15,  25,  55, 105
// With 10: 30,  60, 110
// With 20: 70, 120
// With 50: 150

int main() {
    int n, m;

    while (std::cin >> n >> m && (n || m)) {
        int r = m - n;
        if (r == 7 || r == 12 || r == 22 || r == 52 || r == 102 || r == 15 || r == 25 || r == 55 || r == 105 || r == 30 || r == 60 || r == 110 || r == 70 || r == 120 || r == 150) {
            std::cout << "possible\n";
        } else {
            std::cout << "impossible\n";
        }
    }
}
