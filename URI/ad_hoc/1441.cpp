#include <iostream>

int seq(int n, int base) {
    if (n == 0)
        return base;
    int bef = seq(n - 1, base);
    return bef%2 == 0 ? bef/2 : 3*bef + 1;
}

int main() {
    int n;

    while (std::cin >> n && n) {
        int s, c = 0, bigger = 0;
        do {
            s = seq(c++, n);
            if (s > bigger) bigger = s;
        } while (s != 1);
        std::cout << bigger << "\n";
    }

    return 0;
}
