#include <iostream>
#include <algorithm>

int main() {
    int n;

    std::cin >> n;

    while (n--) {
        int sz, c = 0;
        std::cin >> sz;
        int v1[sz], v2[sz];
        for (int i = 0; i < sz; i++) {
            std::cin >> v1[i];
            v2[i] = v1[i];
        }
        std::sort(v2, v2 + sz);
        for (int i = 0; i < sz; i++)
            if (v1[i] == v2[sz - i - 1]) c++;
        std::cout << c << std::endl;
    }

    return 0;
}
