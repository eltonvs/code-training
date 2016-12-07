#include <bits/stdc++.h>

char actions[12][12];
int visited[12][12];
int n_steps, rows, col, xloop, yloop, loop, n_stepsbf, need_sum;

void run_on_map(int x, int y) {
    if (visited[y][x]) {
        xloop = x, yloop = y, loop = 1;
        return;
    }

    if (x == 0 || y == 0 || x == col + 1 || y == rows + 1) {
        return;
    }

    n_steps++;
    visited[y][x] = 1;
    int new_x = actions[y][x] == 'E' ? x + 1 : actions[y][x] == 'W' ? x - 1 : x;
    int new_y = actions[y][x] == 'S' ? y + 1 : actions[y][x] == 'N' ? y - 1 : y;

    run_on_map(new_x, new_y);

    if (loop) {
        if (x == xloop && y == yloop) {
            need_sum = 1;
        } else if (need_sum) {
            n_stepsbf++;
        }
    }
}

int main() {
    int ini_p;

    while (std::cin >> rows >> col >> ini_p && (rows || col || ini_p)) {
        memset(actions, 0, sizeof(actions));
        memset(visited, 0, sizeof(visited));

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= col; j++) {
                std::cin >> actions[i][j];
            }
        }

        n_steps = n_stepsbf = loop = need_sum = 0;
        run_on_map(ini_p, 1);
        if (loop) {
            std::cout << n_stepsbf << " step(s) before a loop of " << n_steps - n_stepsbf << " step(s)\n";
        } else {
            std::cout << n_steps << " step(s) to exit\n";
        }
    }

    return 0;
}
