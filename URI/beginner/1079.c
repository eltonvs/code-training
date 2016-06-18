#include <stdio.h>

int main() {
    int n, i;
    float v1, v2, v3;

    scanf("%i", &n);

    for (i = 1; i <= n; i++) {
        scanf("%f %f %f", &v1, &v2, &v3);
        printf("%.1f\n", (v1 * 2 + v2 * 3 + v3 * 5)/10);
    }

    return 0;
}
