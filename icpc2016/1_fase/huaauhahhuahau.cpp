#include <bits/stdc++.h>

bool is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    int ini, end, ok;
    std::string line;

    std::cin >> line;

    ini = 0, end = line.size() - 1, ok = 1;

    while (ini < end && ok) {
        while (!is_vowel(line[ini])) ini++;
        while (!is_vowel(line[end])) end--;

        ok &= line[ini++] == line[end--];
    }

    std::cout << (ok ? "S\n" : "N\n");

    return 0;
}
