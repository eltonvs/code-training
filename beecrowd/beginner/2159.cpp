#include <cstdio>
#include <cmath>

int main() {
    int n;

    scanf("%i", &n);

    printf("%.1f %.1f\n", n/log(n), 1.25506 * n/log(n));

    return 0;
}
