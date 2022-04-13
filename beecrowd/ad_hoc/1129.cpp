#include <iostream>

int main() {
    char ans[] = {'A', 'B', 'C', 'D', 'E', '*'};
    int n;
    while (std::cin >> n && n) {
        for (int i = 0; i < n; i++) {
            int q = 5, f = 0;
            for (int j = 0, tmp; j < 5; j++) {
                std::cin >> tmp;
                if (tmp <= 127)
                    q = f ? 5 : j, f = 1;
            }
            std::cout << ans[q] << "\n";
        }
    }

    return 0;
}
