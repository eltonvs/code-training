#include <stdio.h>

int main() {
    int c = 0;
    float i = 0, j = 1;

    while (c <= 32) {
        if (c < 3 || c >= 15 && c <= 17 || c >= 30)
            printf("I=%i J=%i\n", (int)i, (int)j);
        else
            printf("I=%.1f J=%.1f\n", i, j);
        c++, j++;
        if (c % 3 == 0)
            i += 0.2, j = 1 + i;
    }

    return 0;
}
