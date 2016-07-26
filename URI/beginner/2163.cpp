#include <cstdio>

int main() {
    int n, m, c_x = 0, c_y = 0;

    scanf("%i %i", &n, &m);

    int t[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%i", &t[i][j]);

    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < m - 1; j++)
            if (t[i][j] == 42 && t[i - 1][j - 1] == 7 && t[i][j - 1] == 7 && t[i + 1][j - 1] == 7 && t[i - 1][j] == 7 && t[i + 1][j] == 7 && t[i - 1][j + 1] == 7 && t[i][j + 1] == 7 && t[i + 1][j + 1] == 7)
                c_x = i + 1, c_y = j + 1, i = n, j = m;

    printf("%i %i\n", c_x, c_y);

    return 0;
}
