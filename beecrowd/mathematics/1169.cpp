#include <iostream>

unsigned long long grains(unsigned long long n) {
    return n == 1 ? 2 : (grains(n - 1) << 1);
}

int main() {
    int n, c;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> c;
        if (c == 64)
            std::cout << "1537228672809129 kg\n";
        else
            std::cout << grains(c)/12000 << " kg\n";
    }

    return 0;
}
