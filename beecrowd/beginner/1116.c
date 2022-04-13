#include <stdio.h>

int main() {
    int n, c = 1, x, y;

    scanf("%i", &n);

    while (c <= n) {
        scanf("%i %i", &x, &y);
        if (y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", (float)x/y);
        c++;
    }

    return 0;
}
