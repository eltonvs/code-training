#include <cstdio>
#include <cmath>

int main() {
    int c;

    scanf("%i", &c);

    while (c--) {
        int n, m;
        scanf("%i %i", &n, &m);
        n = ceil((n - 2)/3.0);
        m = ceil((m - 2)/3.0);

        printf("%i\n", n*m);
    }

    return 0;
}
