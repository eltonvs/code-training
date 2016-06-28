#include <iostream>

int main() {
    int n, d;

    while (std::cin >> n >> d && (n || d)) {
        bool m[d][n];
        for (int i = 0; i < d; i++)
            for (int j = 0; j < n; j++)
                std::cin >> m[i][j];
        bool a = false;
        for (int i = 0; i < n && !a; i++) {
            a = true;
            for (int j = 0; j < d; j++)
                a &= m[j][i];
        }
        std::cout << (a ? "yes" : "no") << "\n";
    }

    return 0;
}
