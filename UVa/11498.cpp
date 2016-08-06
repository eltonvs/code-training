#include <cstdio>

int main() {
    int n;

    while (scanf("%i", &n) != EOF && n) {
        int div_x, div_y;
        scanf("%i %i", &div_x, &div_y);
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf("%i %i", &x, &y);
            if (x == div_x || y == div_y)
                printf("divisa\n");
            else if (x > div_x && y > div_y)
                printf("NE\n");
            else if (x > div_x)
                printf("SE\n");
            else if (y > div_y)
                printf("NO\n");
            else
                printf("SO\n");
        }
    }

    return 0;
}
