#include <bits/stdc++.h>

int main() {
    int s = 0;
    std::string n;
    std::cin >> n;

    for (auto i = 0u; i < n.size(); i++) s += n[i] - '0';

    std::cout << s%3 << "\n";
}
