#include <iostream>

int main() {
    int n;
    unsigned i;

    std::cin >> n;

    while (n--) {
        std::string st1, st2, r = "";
        std::cin >> st1 >> st2;

        for (i = 0; i < std::min(st1.size(), st2.size()); i++)
            r += std::string(1, st1[i]) + std::string(1, st2[i]);
        while (i < st1.size())
            r += st1[i++];
        while (i < st2.size())
            r += st2[i++];

        std::cout << r << "\n";
    }

    return 0;
}
