#include <iostream>

int main() {
    int m, d, days_per_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (std::cin >> m >> d) {
        int tot_days = 0;
        if (m == 12 && d == 25) {
            std::cout << "E natal!\n";
            continue;
        } else if (m == 12 && d > 25) {
            std::cout << "Ja passou!\n";
            continue;
        } else if (m == 12) {
            if (d == 24) {
                std::cout << "E vespera de natal!\n";
                continue;
            }
            tot_days = 25 - d;
        } else {
            tot_days = 25 - d;
            while (m != 12) {
                tot_days += days_per_month[m++];
            }
        }
        std::cout << "Faltam " << tot_days << " dias para o natal!\n";
    }

    return 0;
}
