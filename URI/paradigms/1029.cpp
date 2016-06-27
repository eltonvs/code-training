#include <iostream>

int fib(int n, int &calls) {
    calls++;
    return n < 2 ? n : fib(n - 1, calls) + fib(n - 2, calls);
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int c = 0, b;
        std::cin >> b;
        int f = fib(b, c);
        std::cout << "fib(" << b << ") = " << c - 1 << " calls = " << f << "\n";
    }

    return 0;
}
