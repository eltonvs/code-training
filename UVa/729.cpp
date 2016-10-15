#include <bits/stdc++.h>

unsigned long long int fatorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * fatorial(n - 1);
}

unsigned long long int num_comb(int n, int h) {
    return fatorial(n)/(fatorial(n - h)*fatorial(h));
}

int main() {
    int N, n, h;
    unsigned long long int num_combinations, i;

    std::cin >> N;

    while (N--) {
        std::cin.ignore();
        std::cin >> n >> h;

        std::string s(n - h, '0');
        s += std::string(h, '1');

        num_combinations = num_comb(n, h);

        for (i = 0; i < num_combinations; i++) {
            std::cout << s << "\n";
            std::next_permutation(s.begin(), s.end());
        }

        if (N)
            std::cout << "\n";
    }

    return 0;
}
