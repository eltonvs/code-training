#include <iostream>

int main() {
    unsigned long long a, b;

    std::cin >> a >> b;

    std::cout << (b*(b + 1) - a*(a - 1))/2 << std::endl;

    return 0;
}
