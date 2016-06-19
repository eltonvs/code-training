#include <iostream>

int main() {
    int x, s = 0, z, n = 0;

    std::cin >> x;

    while (std::cin >> z && z <= x);

    for (int i = x; s <= z; i++)
        s += x++, n++;

    std::cout << n << "\n";

    return EXIT_SUCCESS;
}
