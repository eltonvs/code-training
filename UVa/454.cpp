#include <bits/stdc++.h>

std::string filter_string(std::string s) {
    std::string r = "";
    std::sort(s.begin(), s.end());
    for (auto i = 0u; i < s.size(); i++)
        if (s[i] != ' ') r += s[i];

    return r;
}

int main() {
    int n;
    std::string line;

    std::cin >> n;
    std::cin.ignore();
    std::cin.ignore();

    while (n--) {
        std::vector<std::string> all_strings;
        std::map<std::string, std::string> filtered_strings;

        while (std::getline(std::cin, line)) {
            if (line == "")
                break;

            all_strings.push_back(line);
            filtered_strings.insert(std::pair<std::string, std::string>(line, filter_string(line)));
        }

        std::sort(all_strings.begin(), all_strings.end());

        for (auto i = 0u; i < all_strings.size(); i++) {
            for (auto j = i + 1; j < all_strings.size(); j++) {
                if (filtered_strings[all_strings[i]] == filtered_strings[all_strings[j]])
                    std::cout << all_strings[i] << " = " << all_strings[j] << "\n";
            }
        }

        if (n)
            std::cout << "\n";
    }

    return 0;
}
