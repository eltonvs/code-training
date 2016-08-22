#include <cstdio>

int main() {
    int v, t;

    while (scanf("%i %i", &v, &t) != EOF) {
        printf("%i\n", v * t * 2);
    }

    return 0;
}
