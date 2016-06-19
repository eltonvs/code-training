#include <stdio.h>

int main() {
    int c, n, i;

    scanf("%d", &c);

    while (c > 0) {
        scanf("%d", &n);

        float soma = 0, s = 0;
        int num[n];

        for (i = 0; i < n; i++) {
            scanf("%d", &num[i]);
            soma += num[i];
        }

        soma /= n;

        for (i = 0; i < n; i++)
            if (num[i] > soma) s++;

        printf("%.3f%c\n", s/n*100.000, '%');
        c--;
    }

    return 0;
}
