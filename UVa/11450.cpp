#include <bits/stdc++.h>

int mem[200][20];
int garments[20][20];
int n_garments[20];
int tot_money, tot_garments;

int pd(int money, int curr_garment) {
    if (money < 0) return -1;
    if (curr_garment == tot_garments) return tot_money - money;
    if (mem[money][curr_garment] != -1) return mem[money][curr_garment];

    int r = -1;
    for (int i = 0; i < n_garments[curr_garment]; i++) {
        r = std::max(r, pd(money - garments[curr_garment][i], curr_garment + 1));
    }
    mem[money][curr_garment] = r;

    return r;
}

int main() {
    int n;

    std::cin >> n;

    while (n--) {
        memset(mem, -1, sizeof(mem));
        std::cin >> tot_money >> tot_garments;

        for (int i = 0; i < tot_garments; i++) {
            std::cin >> n_garments[i];
            for (int j = 0; j < n_garments[i]; j++) {
                std::cin >> garments[i][j];
            }
        }

        int r = pd(tot_money, 0);

        std::cout << (r > 0 ? std::to_string(r) : "no solution") << "\n";
    }

    return 0;
}
