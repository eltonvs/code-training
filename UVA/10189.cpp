#include <cstdio>
#include <cstring>

int main() {
    int n, m, c = 1;
    char f[110][110], buf;

    while (scanf("%i %i", &n, &m) != EOF && (n || m)) {
        memset(f, '.', 110*110);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                scanf("%c", &f[i][j]);
                if (f[i][j] == '\n') j--;
            }
        }

        if (c == 1) {
            printf("Field #%i:\n", c++);
        } else {
            printf("\nField #%i:\n", c++);
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (f[i][j] == '*') {
                    printf("*");
                } else {
                    int cont = (f[i - 1][j - 1] == '*') + (f[i - 1][j] == '*') + (f[i - 1][j + 1] == '*') + (f[i][j - 1] == '*') + (f[i][j + 1] == '*') + (f[i + 1][j - 1] == '*') + (f[i + 1][j] == '*') + (f[i + 1][j + 1] == '*');
                    printf("%i", cont);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
