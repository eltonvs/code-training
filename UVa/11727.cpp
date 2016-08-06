#include <cstdio>

int main() {
    int n, s1, s2, s3;

    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%i %i %i", &s1, &s2, &s3);

        if (s1 > s2 && s3 > s1 || s1 > s3 && s2 > s1)
            printf("Case %i: %i\n", i, s1);
        else if (s2 > s1 && s3 > s2 || s2 > s3 && s1 > s2)
            printf("Case %i: %i\n", i, s2);
        else
            printf("Case %i: %i\n", i, s3);
    }

    return 0;
}
