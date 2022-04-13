#include <cstdio>

int main() {
    int n;
    char str[] = "****************************************************************************************************";
    char spc[] = "                                                                                                    ";

    while (scanf("%i", &n) != EOF) {
        int h = n/2 + 1;
        for (int i = 0; i < h; i++)
            printf("%.*s%.*s\n", n/2 - i, spc, 2*i + 1, str);
        printf("%.*s*\n%.*s***\n\n", n/2, spc, n/2 - 1, spc);
    }

    return 0;
}
