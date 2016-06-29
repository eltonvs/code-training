#include <iostream>

int main() {
    int n, m;
    unsigned long long sum;

    while (std::cin >> n >> m && (n != -1 || m != -1)) {
        sum = 0;
        for (int i = 0, tmp; i < n; i++) {
            std::cin >> tmp;
            sum += tmp*(n - i);
        }
        std::cout << sum*m << std::endl;
    }

    return 0;
}
