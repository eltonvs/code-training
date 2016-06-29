#include <cstdio>
#include <cstdlib>

int main() {
    char nb[15];

    while (scanf("%s", &nb) != EOF && nb[0] != '-') {
        if (nb[1] == 'x')
            printf("%ld\n", strtol(nb, NULL, 16));
        else
            printf("0x%lX\n", strtoul(nb, NULL, 10));
    }

    return 0;
}
