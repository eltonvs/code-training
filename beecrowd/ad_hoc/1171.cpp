#include <iostream>
#include <algorithm>

int main() {
    int n;

    std::cin >> n;

    int nb[n];

    for (int i = 0; i < n; i++)
        std::cin >> nb[i];

    std::sort(nb, nb + n);

    short int c = 1;
    for (int i = 1; i < n; i++) {
        if (nb[i] == nb[i - 1]) {
            c++;
        } else {
            std::cout << nb[i - 1] << " aparece " << c << " vez(es)\n";
            c = 1;
        }
    }
    std::cout << nb[n - 1] << " aparece " << c << " vez(es)\n";

    return 0;
}
