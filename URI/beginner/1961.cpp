#include <iostream>

int main() {
    int p, n, prev, next;
    bool win = true;

    std::cin >> p >> n;

    std::cin >> prev;

    for (int i = 1; i < n; i++) {
        std::cin >> next;
        if (abs(next - prev) > p)
            win = false;
        prev = next;
    }

    std::cout << (win ? "YOU WIN" : "GAME OVER") << "\n";

    return 0;
}
