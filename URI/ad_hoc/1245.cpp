#include <iostream>

int main() {
    int n;

    while (std::cin >> n) {
        int s[31] = {0}, shoe_pairs = 0;
        for (int i = 0, sz; i < n; i++) {
            char sd;
            std::cin >> sz >> sd;
            s[sz - 30] += (sd == 69) ? -1 : 1;
            if ((sd == 69 && s[sz - 30] >= 0) || (sd == 68 && s[sz - 30] <= 0))
                shoe_pairs++;
        }
        std::cout << shoe_pairs << "\n";
    }

    return 0;
}
