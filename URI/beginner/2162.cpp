#include <cstdio>

int main() {
    int n, p, c, r = 1, f;

    scanf("%i %i", &n, &p);

    for (int i = 1; i < n; i++) {
        scanf("%i", &c);
        if (i == 1)
            f = c > p;
        if (c == p)
            r = 0;
        r &= (f ? (c > p) : (c < p)), f = !f, p = c;
    }

    printf("%i\n", r);

    return 0;
}
