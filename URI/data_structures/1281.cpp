#include <iostream>
#include <iomanip>
#include <map>

int main() {
    int n;

    std::cin >> n;

    while (n--) {
        int sz;
        std::cin >> sz;
        std::map<std::string, float> lst;
        for (int i = 0; i < sz; i++) {
            std::string name;
            float value;
            std::cin >> name >> value;
            lst.insert(std::pair<std::string, float>(name, value));
        }
        float tot = 0;
        std::cin >> sz;
        for (int i = 0; i < sz; i++) {
            std::string name;
            int tmp;
            std::cin >> name >> tmp;
            tot += lst[name]*tmp;
        }
        std::cout << "R$ " << std::fixed << std::setprecision(2) << tot << std::endl;
    }

    return 0;
}
