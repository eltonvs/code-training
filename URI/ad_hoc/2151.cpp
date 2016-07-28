#include <cstdio>
#include <cstdlib>

int dist_dots(int x1, int y1, int x2, int y2) {
    int a = abs(x1 - x2), b = abs(y1 - y2);

    return a > b ? a : b;
}

int main() {
    int c, m, n, x, y, tmp, inc;

    scanf("%i", &c);

    for (int cc = 1; cc <= c; cc++) {
        scanf("%i %i %i %i", &m, &n, &x, &y);

        printf("Parede %i:\n", cc);

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                scanf("%i", &tmp);
                inc = 10 - dist_dots(i, j, x, y);
                tmp += (inc < 1 ? 1 : inc);
                printf("%i%c", tmp, j == n ? '\n' : ' ');
            }
        }
    }

    return 0;
}
