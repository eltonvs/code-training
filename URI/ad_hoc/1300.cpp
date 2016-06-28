#include <iostream>

int main() {
    int a;

    while (std::cin >> a)
        std::cout << (a%6 == 0 ? "Y" : "N") << "\n";

    return 0;
}
