#include <stdio.h>

int main() {
    int x, y;

    do {
        scanf("%i %i", &x, &y);
        if (x == y)
            break;
        else if (x > y)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
    } while (x != y);

    return 0;
}
