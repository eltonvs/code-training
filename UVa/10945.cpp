#include <iostream>

std::string filter_string(std::string s) {
    std::string new_string = "";
    for (auto i = 0u; i < s.size(); i++)
        if (isalpha(s[i])) new_string += tolower(s[i]);
    return new_string;
}

int main() {
    std::string str;

    while (std::getline(std::cin, str) && str != "DONE") {
        str = filter_string(str);
        bool palindrome = true;
        for (auto i = 0u; i < str.size()/2 && palindrome; i++)
            palindrome &= (str[i] == str[str.size() - i - 1]);

        std::cout << (palindrome ? "You won't be eaten!\n" : "Uh oh..\n");
    }

    return 0;
}
