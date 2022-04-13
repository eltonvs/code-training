#include <iostream>

int main() {
    int n;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        char dld[4];
        int r;

        std::cin >> dld;
        std::cin.ignore();

        if (dld[0] == dld[2])
            r = (dld[0] - 48)*(dld[2] - 48);
        else if (dld[1] >= 97)
            r = dld[0] + dld[2] - 96;
        else
            r = dld[2] - dld[0];

        std::cout << r << "\n";
    }

    return 0;
}
