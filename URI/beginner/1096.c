#include <stdio.h>

int main() {
    int c = 0, i = 1, j = 7;

    while (i <= 9 && j >= 5) {
        printf("I=%i J=%i\n", i, j);
        c++, j--;
        if (c == 3)
            c = 0, i += 2, j = 7;
    }

    return 0;
}
