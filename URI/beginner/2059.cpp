#include <iostream>

int main() {
    int p, j1, j2, r, a, w;

    std::cin >> p >> j1 >> j2 >> r >> a;

    if ((j1 + j2)%2 == 0)
        w = p ? 1 : 2;
    else
        w = p ? 2 : 1;

    if (r)
        w = a ? 2 : 1;
    else
        w = a ? 1 : w;

    std::cout << "Jogador " << w << " ganha!\n";

    return 0;
}
