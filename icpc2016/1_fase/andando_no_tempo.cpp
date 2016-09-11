#include <bits/stdc++.h>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    std::cout << (a - b == 0 || a - c == 0 || b - c == 0 || a - b - c == 0 ? "S\n" : "N\n");

    return 0;
}
