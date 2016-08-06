#include <cstdio>

int main() {
    int n, b, h, w;

    while (scanf("%i %i %i %i", &n, &b, &h, &w) != EOF) {
        int min_cost = b + 1;
        for (int i = 0; i < h; i++) {
            int p, a, elegible = 0, total_cost;
            scanf("%i", &p);
            total_cost = p*n;
            for (int j = 0; j < w; j++) {
                scanf("%i", &a);
                if (a >= n) elegible = 1;
            }
            if (elegible && total_cost < min_cost) min_cost = total_cost;
        }
        if (min_cost <= b)
            printf("%i\n", min_cost);
        else
            printf("stay home\n");
    }

    return 0;
}
