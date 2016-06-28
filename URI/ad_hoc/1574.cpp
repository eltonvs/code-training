#include <iostream>

int main() {
    int t, n;

    std::cin >> t;

    while (t--) {
        std::cin >> n;
        std::cin.ignore();
        std::string lines[n];
        int p = 0;
        for (int i = 0; i < n; i++) {
            std::getline(std::cin, lines[i]);
            if (lines[i][0] == 'S')
                lines[i] = lines[std::stoi(lines[i].substr(8)) - 1];
            p += lines[i] == "RIGHT" ? 1 : -1;
        }
        std::cout << p << "\n";
    }

    return 0;
}
