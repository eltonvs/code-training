#include <cstdio>

int main() {
    int n, l_m = 0, c_m, fd = 0;

    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        scanf("%i", &c_m);
        if (fd == 0 && c_m < l_m)
            fd = i + 1;
        l_m = c_m;
    }

    printf("%i\n", fd);

    return 0;
}
