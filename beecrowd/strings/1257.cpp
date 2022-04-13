#include <cstdio>

int main() {
    int n, l, r;
    char s[52];

    scanf("%i", &n);

    while (n--) {
        r = 0;
        scanf("%i", &l);
        for (int i = 0; i < l; i++) {
            scanf("%s", &s);
            for (auto j = 0u; s[j] != '\n' && s[j] != '\0'; j++)
                r += s[j] - 'A' + i + j;
        }
        printf("%i\n", r);
    }

    return 0;
}
