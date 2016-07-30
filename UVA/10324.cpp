#include <cstdio>

int main() {
    int n, a, b, c = 1;
    char str[1000005];

    while (scanf("%s", str) != EOF) {
        scanf("%i", &n);
        printf("Case %i:\n", c++);
        while (n--) {
            scanf("%i %i", &a, &b);
            if (a > b) a += b, b = a - b, a -= b;
            bool rst = true;
            for (int i = a; i < b && rst; i++)
                rst &= (str[i] == str[i + 1]);
            printf("%s\n", rst ? "Yes" : "No");
        }
    }

    return 0;
}
