#include <iostream>

int main() {
    int n;
    std::string line;

    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        int l[26] = {0}, c = 0;
        std::getline(std::cin, line);
        for (auto i = 0u; i < line.size(); i++)
            if (line[i] >= 'a' && line[i] <= 'z' && !l[line[i] - 'a'])
                l[line[i] - 'a'] = 1, c++;
        if (c == 26)
            std::cout << "frase completa\n";
        else if (c >= 13)
            std::cout << "frase quase completa\n";
        else
            std::cout << "frase mal elaborada\n";
    }

    return 0;
}
