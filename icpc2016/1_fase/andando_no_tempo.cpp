#include <bits/stdc++.h>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    std::cout << (a == b || a == c || b == c || a == b + c || b == a + c || c == a + b ? "S\n" : "N\n");

    return 0;
}
