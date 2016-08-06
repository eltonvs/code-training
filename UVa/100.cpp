#include <cstdio>

int main() {
    int ii, ij;
    while (scanf("%i %i", &ii, &ij) != EOF) {
        int i = ii, j = ij, max = 0;
        if (i > j) i += j, j = i - j, i -= j;
        for (int it = i; it <= j; it++) {
            int t = it, c = 1;
            while (t != 1)
                t = (t & 1) ? 3*t + 1 : (t >> 1), c++;
            if (c > max) max = c;
        }
        printf("%i %i %i\n", ii, ij, max);
    }

    return 0;
}
