#include <bits/stdc++.h>

int main() {
    long long int n = -1, a, b, c, d;

    std::cin >> a >> b >> c >> d;

    if (a%b != 0 && d%c != 0) {
        for (long long int i = a; i <= c; i += a) {
            if (i%a == 0 && i%b != 0 && c%i == 0 && d%i != 0) {
                n = i;
                break;
            }
        }
    }

    std::cout << n << std::endl;

    return 0;
}
