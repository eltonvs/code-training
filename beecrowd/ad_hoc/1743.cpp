#include <iostream>

int main() {
    bool l[5], t, ans = true;

    for (int i = 0; i < 5; i++)
        std::cin >> l[i];

    for (int i = 0; i < 5; i++) {
        std::cin >> t;
        ans &= (t^l[i]);
    }

    std::cout << (ans ? "Y" : "N") << "\n";

    return 0;
}
