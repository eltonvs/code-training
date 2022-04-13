#include <stdio.h>

int main() {
    int i = 1, j = 60;

    while (j >= 0) {
        printf("I=%i J=%i\n", i, j);
        i += 3, j -= 5;
    }

    return 0;
}
