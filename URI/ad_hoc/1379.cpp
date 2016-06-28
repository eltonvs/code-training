#include <iostream>

int main() {
    int a, b;

    while (std::cin >> a >> b && (a || b))
        std::cout << std::min(a, b)*3 - a - b << "\n";

    return 0;
}
