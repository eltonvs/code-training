#include <cstdio>

int main() {
    int n;

    scanf("%i", &n);

    while (n--) {
        int h, m, f;
        scanf("%i %i %i", &h, &m, &f);
        printf("%02i:%02i - A porta %s!\n", h, m, f ? "abriu" : "fechou");
    }

    return 0;
}
