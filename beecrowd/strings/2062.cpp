#include <cstdio>
#include <cstring>

int main() {
    int n;
    char txt[25];

    scanf("%i", &n);

    while (n--) {
        scanf("%s", &txt);
        if (strlen(txt) == 3 && txt[0] == 'O' && txt[1] == 'B')
            printf("OBI%c", (n == 0 ? '\n' : ' '));
        else if (strlen(txt) == 3 && txt[0] == 'U' && txt[1] == 'R')
            printf("URI%c", (n == 0 ? '\n' : ' '));
        else
            printf("%s%c", txt, (n == 0 ? '\n' : ' '));
    }

    return 0;
}
