#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int qt, s, win;
        std::cin >> qt >> s;

        for (int j = 0, f = 0, t1, t2 = 200; j < qt; j++) {
            std::cin >> t1;
            if (t1 == s && !f)
                win = j, f = 1, t2 = t1;
            else if (j == 0 || (abs(s - t1) < abs(s - t2) && !f))
                win = j, t2 = t1;
        }

        std::cout << win + 1 << "\n";
    }

    return 0;
}
