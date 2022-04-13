#include <iostream>

int main() {
    std::string name, last = "";

    while (std::getline(std::cin, name)) {
        bool change = true;
        for (auto i = 0u; i < last.size() && i < name.size() && change; i++) {
            if (tolower(name[i]) >= 'a' && tolower(name[i]) <= 'z') {
                if (tolower(name[i]) > tolower(last[i])) {
                    change = true;
                    break;
                }
                change = tolower(last[i]) == tolower(name[i]);
            } else if (last[i] != ' ') {
                change = false;
            }
        }
        if (change) last = name;
    }

    std::cout << last << std::endl;

    return 0;
}
