#include <cstdio>

int main() {
    int n;
    double div = 0;

    scanf("%i", &n);

    for (int i = 0; i < n; i++)
        div = 1.0/(6 + div);

    printf("%.10f\n", 3 + div);

    return 0;
}
