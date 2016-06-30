#include <iostream>

int main() {
    std::string line;

    while (std::getline(std::cin, line)) {
        for (auto i(0u); i < line.size(); i++) {
            if (line[i] >= 'A' && line[i] <= 'Z')
                line[i] = 'A' + (line[i] - 'A' + 13)%26;
            else if (line[i] >= 'a' && line[i] <= 'z')
                line[i] = 'a' + (line[i] - 'a' + 13)%26;
        }
        std::cout << line << std::endl;
    }

    return 0;
}
