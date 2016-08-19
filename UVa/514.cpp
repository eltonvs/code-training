#include <iostream>
#include <sstream>
#include <stack>

int main() {
    std::stack<int> station;
    std::string line;

    int n;

    while (std::cin >> n && n) {
        std::cin.ignore();
        while (std::getline(std::cin, line)) {
            if (line == "0") {
                std::cout << std::endl;
                break;
            }

            std::stringstream ss(line);
            int tmp, curr = 1, is_possible = 1, f = 0;

            while (ss >> tmp && is_possible) {
                f = 0;
                if (curr == tmp) {
                    curr++;
                    continue;
                }
                if (!station.empty() && station.top() == tmp) {
                    station.pop();
                    continue;
                }
                while (curr <= n) {
                    if (curr != tmp) {
                        station.push(curr++);
                        is_possible = false;
                    } else {
                        curr++;
                        is_possible = true, f = 1;
                        break;
                    }
                }
                if (curr > n && !f)
                    is_possible = false;
            }
            while (!station.empty()) station.pop();
            std::cout << (is_possible ? "Yes" : "No") << "\n";
        }
    }

    return 0;
}
