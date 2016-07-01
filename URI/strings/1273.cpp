#include <cstdio>
#include <cstring>

int main() {
    int n, fst = 1;
    char sp[] = "                                                  ";

    while (scanf("%i", &n) != EOF && n) {
        if (fst)
            fst = 0;
        else
            printf("\n");
        int b = 0, len;
        char words[n][52];
        for (int i = 0; i < n; i++) {
            scanf("%s", &words[i]);
            len = strlen(words[i]);
            if (len > b) b = len;
        }
        for (int i = 0; i < n; i++)
            printf("%.*s%s\n", b - strlen(words[i]), sp, words[i]);
    }

    return 0;
}
