#include <iostream>

int main() {
    int n;
    std::string line;

    std::cin >> n;

    while (n--) {
        std::cin >> line;
        int v = 0, p_v, c = 0;
        for (auto i = 0u; i < line.size(); i++) {
            if (line[i] == '.') continue;
            p_v = v, v = line[i] == '<' ? v + 1 : v - 1;
            if (p_v > v && p_v > 0) c++;
            if (v < 0) v = 0;
        }
        std::cout << c << std::endl;
    }

    return 0;
}
