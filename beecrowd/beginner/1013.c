#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);

    b = (b + c + abs(b - c))/2;
    a = (a + b + abs(a - b))/2;

    printf("%i eh o maior\n", a);

    return 0;
}
