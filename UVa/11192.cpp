#include <iostream>
#include <algorithm>

int main() {
    std::string line;
    int d;

    while (std::cin >> d && d) {
        std::cin >> line;
        int c = line.size()/d;
        for (int i = 0; i < line.size(); i += c)
            std::reverse(line.begin() + i, line.begin() + i + c);
        std::cout << line << std::endl;
    }

    return 0;
}
