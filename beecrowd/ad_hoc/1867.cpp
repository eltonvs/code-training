#include <iostream>

int main() {
    std::string n1, n2;

    while (std::cin >> n1 >> n2 && (n1 != "0" || n2 != "0")) {
        int s_n1, s_n2;
        do {
            s_n1 = 0;
            for (auto i(0u); i < n1.size(); i++)
                s_n1 += n1[i] - 48;
            n1 = std::to_string(s_n1);
        } while (s_n1 > 9);
        do {
            s_n2 = 0;
            for (auto i(0u); i < n2.size(); i++)
                s_n2 += n2[i] - 48;
            n2 = std::to_string(s_n2);
        } while (s_n2 > 9);

        std::cout << (s_n2 > s_n1 ? 2 : static_cast<int>(s_n1 != s_n2)) << "\n";
    }

    return 0;
}
