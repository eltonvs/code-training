#include <cstdio>

int main() {
    int n;
    double div = 0;

    scanf("%i", &n);

    for (int i = 0; i < n; i++)
        div = 1.0/(2 + div);

    printf("%.10f\n", 1 + div);

    return 0;
}
