#include <iostream>

int main() {
    int n;
    std::string line;

    std::ios::sync_with_stdio(false);

    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        int d;
        std::getline(std::cin, line);
        std::cin >> d;
        std::cin.ignore();

        for (int j = 0; j < line.size(); j++)
            line[j] = 65 + (line[j] - 65 + 26 - d)%26;

        std::cout << line << "\n";
    }

    return 0;
}
