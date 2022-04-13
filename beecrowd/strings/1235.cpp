#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::string line;

    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::getline(std::cin, line);
        std::reverse(line.begin(), line.end() - line.size()/2);
        std::reverse(line.begin() + line.size()/2, line.end());
        std::cout << line << "\n";
    }

    return 0;
}
