#include <iostream>

int main() {
    int n, m;
    while (std::cin >> n >> m && n && m) {
        bool ans[n][m], c1 = 1, c2 = 1, c3 = 1, c4 = 1;
        int r_sum[n], c_sum[m];

        std::fill(r_sum, r_sum + n, 0);
        std::fill(c_sum, c_sum + m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cin >> ans[i][j];
                r_sum[i] += ans[i][j], c_sum[j] += ans[i][j];
            }
        }

        for (int i = 0; i < n; i++)
            c1 &= (r_sum[i] != m), c4 &= (r_sum[i] > 0);

        for (int i = 0; i < m; i++)
            c2 &= (c_sum[i] > 0), c3 &= (c_sum[i] < n);

        std::cout << c1 + c2 + c3 + c4 << "\n";
    }

    return 0;
}
