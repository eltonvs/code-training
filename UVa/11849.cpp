#include <iostream>
#include <set>

int main() {
    int n, m, t, tmp;
    std::set<int> cards;

    while (std::cin >> n >> m && (n || m)) {
        t = 0;
        while (n--) {
            std::cin >> tmp;
            cards.insert(tmp);
        }

        while (m--) {
            std::cin >> tmp;
            auto it = cards.find(tmp);
            if (it != cards.end()) {
                t++;
                cards.erase(it);
            }
        }

        cards.clear();

        std::cout << t << std::endl;
    }

    return 0;
}
