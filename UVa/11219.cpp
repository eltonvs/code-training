#include <cstdio>

int main() {
    int n;
    int c[3], b[3];

    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d/%d/%d", &c[0], &c[1], &c[2]);
        scanf("%d/%d/%d", &b[0], &b[1], &b[2]);

        if (b[2] > c[2] || (b[2] == c[2] && b[1] > c[1]) || (b[2] == c[2] && b[1] == c[1] && b[0] > c[0])) {
            printf("Case #%i: Invalid birth date\n", i);
        } else {
            int age = c[2] - b[2];
            if (b[1] > c[1] || (b[1] == c[1] && b[0] > c[0]))
                age--;

            if (age > 130)
                printf("Case #%i: Check birth date\n", i);
            else
                printf("Case #%i: %i\n", i, age);
        }
    }

    return 0;
}

