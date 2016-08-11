#include <cstdio>
#include <cstring>

int main() {
    int n;
    char grid[3][4], buf;

    scanf("%i", &n);

    while (n--) {
        int c_O = 0, c_X = 0;
        int w_X = 0, w_O = 0;
        for (int i = 0; i < 3; i++) {
            scanf("%s\n", grid[i]);
            for (int j = 0; j < 3; j++) {
                if (grid[i][j] == 'O') c_O++;
                else if (grid[i][j] == 'X') c_X++;
            }
        }
        // rows
        for (int i = 0; i < 3; i++) {
            if (strcmp(grid[i], "OOO") == 0) w_O++;
            else if (strcmp(grid[i], "XXX") == 0) w_X++;
        }
        // columns
        for (int i = 0; i < 3; i++) {
            if (grid[0][i] == 'O' && grid[1][i] == 'O' && grid[2][i] == 'O') w_O++;
            if (grid[0][i] == 'X' && grid[1][i] == 'X' && grid[2][i] == 'X') w_X++;
        }
        // diagonals
        if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') w_O++;
        if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X') w_X++;
        if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O') w_O++;
        if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X') w_X++;

        printf("%s\n", ((c_X == c_O || c_X == c_O + 1) && (w_X + w_O) <= 1 && (w_O != 1 || c_X == c_O) && (w_X != 1 || c_X == c_O + 1)) ? "yes" : "no");
    }

    return 0;
}
