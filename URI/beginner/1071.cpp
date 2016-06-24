#include <iostream>

int main() {
    int x, y;
    long long int s = 0;

    std::cin >> x >> y;

    if (x > y)
        x += y, y = x - y, x -= y;

    x = abs(x%2) == 1 ? x + 2 : x + 1;
    while (x < y)
        s += x, x += 2;

    std::cout << s << "\n";

    return 0;
}
