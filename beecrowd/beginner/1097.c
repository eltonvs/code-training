#include <stdio.h>

int main() {
    int c = 0, c2 = 7, i = 1, j = 7;

    while (i <= 9 && c2 <= 15) {
        printf("I=%i J=%i\n", i, j);
        c++, j--;
        if (c == 3)
            c = 0, i += 2, c2 += 2, j = c2;
    }

    return 0;
}
