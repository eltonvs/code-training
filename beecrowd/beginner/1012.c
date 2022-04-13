#include <stdio.h>

#define PI 3.14159

int main() {
    double a, b, c, areas[5];

    scanf("%lf %lf %lf", &a, &b, &c);

    areas[0] = (a * c) / 2;
    areas[1] = PI * c * c;
    areas[2] = (a + b) / 2 * c;
    areas[3] = b * b;
    areas[4] = a * b;

    printf("%s: %.3lf\n%s: %.3lf\n%s: %.3lf\n%s: %.3lf\n%s: %.3lf\n",
           "TRIANGULO", areas[0], "CIRCULO", areas[1], "TRAPEZIO", areas[2],
           "QUADRADO", areas[3], "RETANGULO", areas[4]);

    return 0;
}
