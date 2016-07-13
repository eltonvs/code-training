#include <iostream>

int main() {
    int cs = 1;
    std::string sub, str;

    while (std::cin >> sub >> str) {
        auto qs = 0u, lst_pos = 0u;

        for (auto i = 0u; i <= str.size() - sub.size(); i++) {
            bool is_sub = true;
            for (auto j = 0u; j < sub.size() && is_sub; j++)
                is_sub = (sub[j] == str[i + j]);
            if (is_sub) {
                qs++;
                if (i + 1 > lst_pos) lst_pos = i + 1;
            }
        }

        std::cout << "Caso #" << cs++ << ":" << "\n";
        if (qs != 0)
            std::cout << "Qtd.Subsequencias: " << qs << "\nPos: " << lst_pos << "\n\n";
        else
            std::cout << "Nao existe subsequencia\n\n";
    }

    return 0;
}
