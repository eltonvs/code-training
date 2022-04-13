#include <iostream>

bool valid_sudoku(int m[9][9]) {
    for (int i = 0; i < 9; i++) {
        int f_r[9] = {0}, f_c[9] = {0};
        for (int j = 0; j < 9; j++)
            f_r[m[i][j] - 1] = 1, f_c[m[j][i] - 1] = 1;
        for (int j = 0; j < 9; j++)
            if (f_r[j] == 0 || f_c[j] == 0)
                return false;
    }

    for (int x = 0; x < 9; x += 3) {
        for (int y = 0; y < 9; y += 3) {
            int f_sq[9] = {0};
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    f_sq[m[x + i][y + j] - 1] = 1;
            for (int i = 0; i < 9; i++)
                if (f_sq[i] == 0)
                    return false;
        }
    }

    return true;
}

int main() {
    int n, m[9][9];

    std::cin >> n;

    for (int inst = 0; inst < n; inst++) {
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                std::cin >> m[i][j];
        std::cout << "Instancia " << inst + 1 << "\n";
        std::cout << (valid_sudoku(m) ? "SIM" : "NAO") << "\n\n";
    }

    return 0;
}
