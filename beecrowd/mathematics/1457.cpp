#include <cstdio>

int main() {
    int n, n1, n2;
    unsigned long long r;
    char nb[30];

    scanf("%i", &n);

    while (n--) {
        scanf("%s", &nb);
        n1 = 0, n2 = 0, r = 1;
        for (auto i(0u); nb[i] != '\n' && nb[i] != '\0'; i++)
            if (nb[i] == '!')
                n2++;
            else
                n1 = n1*10 + (nb[i] - '0');
        while (n1 > 1)
            r *= n1, n1 -= n2;
        printf("%llu\n", r);
    }

    return 0;
}
