#include <iostream>

int main() {
    int n, la, lb, sa, sb;
    std::cin >> n >> la >> lb >> sa >> sb;

    std::cout << ((n >= la && n <= lb) && (n >= sa && n <= sb) ? "possivel" : "impossivel") << "\n";

    return 0;
}
