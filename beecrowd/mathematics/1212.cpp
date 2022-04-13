#include <cstdio>

int main() {
    int n1, n2;

    while (scanf("%i %i", &n1, &n2) != EOF && (n1 || n2)) {
        int c = 0, f = 0;
        while (n1 || n2) {
            if (!f && n1%10 + n2%10 > 9)
                c++, f = 1;
            else if (f && n1%10 + n2%10 + 1 > 9)
                c++;
            else if (f)
                f = 0;
            n1 /= 10, n2 /=  10;
        }
        if (c == 0)
            printf("No carry operation.\n");
        else
            printf("%i carry operation%s.\n", c, c == 1 ? "" : "s");
    }

    return 0;
}
