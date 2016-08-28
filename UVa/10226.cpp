#include <iostream>
#include <iomanip>
#include <map>

int main() {
    int n, fst = 1;
    std::string line;
    std::map<std::string, int> trees;

    std::cin >> n;
    std::cin.ignore();
    std::cin.ignore();

    while (n--) {
        int tot = 0;

        if (fst) {
            fst = 0;
        } else {
            std::cout << "\n";
        }

        while (std::getline(std::cin, line)) {
            if (line == "")
                break;

            auto it = trees.find(line);
            if (it == trees.end())
                trees.insert(std::pair<std::string, int>(line, 1));
            else
                trees[line]++;
            tot++;
        }

        for (auto it = trees.begin(); it != trees.end(); it++) {
            std::cout << it->first << " " << std::fixed
                      << std::setprecision(4) << 100.0*it->second/tot << "\n";
            trees.erase(it);
        }
    }

    return 0;
}
