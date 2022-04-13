#include <stdio.h>

int main() {
    int h1, h2;

    scanf("%i %i", &h1, &h2);

    if (h2 <= h1)
        h2 += 24;

    printf("O JOGO DUROU %i HORA(S)\n", h2 - h1);

    return 0;
}
