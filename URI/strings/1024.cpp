#include <iostream>
#include <string>

bool is_letter(char _c);
void filter_1(std::string &_s);
void filter_2(std::string &_s);
void filter_3(std::string &_s);

int main() {
    int n;
    std::string txt;

    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, txt);
        filter_1(txt);
        filter_2(txt);
        filter_3(txt);
        std::cout << txt << "\n";
    }

    return 0;
}

bool is_letter(char _c) {
    return (_c >= 65 && _c <= 90) || (_c >= 97 && _c <= 122);
}

void filter_1(std::string &_s) {
    for (auto i(0u); i < _s.size(); i++)
        if (is_letter(_s[i]))
            _s[i] += 3;
}

void filter_2(std::string &_s) {
    std::string aux = _s;
    auto _sz = _s.size();
    for (auto i(0u); i < _sz; i++)
        _s[i] = aux[_sz - i - 1];
}

void filter_3(std::string &_s) {
    auto _sz = _s.size();
    for (auto i(_sz/2); i < _sz; i++)
        _s[i]--;
}
