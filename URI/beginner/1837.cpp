#include <iostream>

int main() {
    int a, b, q, r = 0;

    std::cin >> a >> b;

    if (a < 0)
        while (r < abs(b) && (a - r)%b != 0) r++;

    q = (a - r)/b, r = r == 0 ? a%b : r;

    std::cout << q << " " << r << std::endl;

    return 0;
}
