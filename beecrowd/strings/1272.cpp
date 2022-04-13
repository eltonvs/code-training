#include <iostream>

int main() {
    int n;
    std::string line, msg;

    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::getline(std::cin, line);
        bool wsp = true;
        msg = "";
        for (auto i(0u); i < line.size(); i++) {
            if (line[i] == ' ') wsp = true;
            else if (wsp) msg += std::string(1, line[i]), wsp = false;
            else wsp = false;
        }
        std::cout << msg << std::endl;
    }

    return 0;
}
