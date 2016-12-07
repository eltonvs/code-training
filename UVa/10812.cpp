#include <bits/stdc++.h>

int main() {
    int n, a, b, r1, r2;

    std::cin >> n;

    while (n--) {
        std::cin >> a >> b;
        if (b <= a) {
            r1 = a/2 + std::ceil(b/2.0);
            r2 = a - r1;
            if (r1 - r2 == b && r2 <= r1) {
                std::cout << r1 << " " << r2 << std::endl;
                continue;
            }
        }
        std::cout << "impossible\n";
    }

    return 0;
}
