#include <stdio.h>

int main() {
    int c1, n1, c2, n2;
    float v1, v2;

    scanf("%i %i %f", &c1, &n1, &v1);
    scanf("%i %i %f", &c2, &n2, &v2);

    printf("VALOR A PAGAR: R$ %.2f\n", n1 * v1 + n2 * v2);

    return 0;
}
