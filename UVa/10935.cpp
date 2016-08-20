#include <iostream>
#include <numeric>
#include <list>

int main() {
    int mask[50], n;
    std::iota(mask, mask + 50, 1);

    while (std::cin >> n && n) {
        std::list<int> hand(mask, mask + n);

        std::cout << "Discarded cards:";
        bool fst = true;
        while (hand.size() > 1) {
            if (fst) {
                std::cout << " " << hand.front();
                fst = false;
            } else {
                std::cout << ", " << hand.front();
            }
            hand.pop_front();
            hand.push_back(hand.front());
            hand.pop_front();
        }
        std::cout << "\nRemaining card: " << hand.front() << "\n";
    }

    return 0;
}
