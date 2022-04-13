#include <bits/stdc++.h>

int main() {
    int r1, x1, y1, r2, x2, y2;

    while (std::cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
        double dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        std::cout << (dis + r2 > r1 ? "MORTO\n" : "RICO\n");
    }

    return 0;
}
