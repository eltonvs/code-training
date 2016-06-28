#include <iostream>

int main() {
    int n;

    while (std::cin >> n) {
        char v[n];
        std::cin >> v;
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += v[i] - 48;
        std::cout << sum << " " << (sum%3 == 0 ? "sim" : "nao") << "\n";
    }

    return 0;
}
