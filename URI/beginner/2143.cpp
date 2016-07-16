#include <iostream>

int main() {
    int t;

    while (std::cin >> t && t) {
        while (t--) {
            int n, tot;
            std::cin >> n;
            tot = (n%2 == 0) ? (n - 2)*2 + 2 : (n - 1)*2 + 1;
            std::cout << tot << std::endl;
        }
    }

    return 0;
}
