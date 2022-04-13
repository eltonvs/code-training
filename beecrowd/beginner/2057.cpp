#include <iostream>

int main() {
    int i, t, f, r;

    std::cin >> i >> t >> f;

    r = (i + t + f)%24;

    std::cout << (r < 0 ? r + 24 : r) << "\n";

    return 0;
}
