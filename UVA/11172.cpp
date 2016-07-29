#include <cstdio>

int main() {
    int n, a, b;

    scanf("%i", &n);

    while (n--) {
        scanf("%i %i", &a, &b);
        printf("%c\n", (a > b) ? '>' : (a < b) ? '<' : '=');
    }
}
