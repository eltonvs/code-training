#include <cstdio>
#include <algorithm>

int fst_occurrence(int *v, int x, int i, int e) {
    if (i > e) return -1;
    int m = (i + e)/2;
    if (v[m] > x)
        return fst_occurrence(v, x, 0, m - 1);
    else if (v[m] < x)
        return fst_occurrence(v, x, m + 1, e);
    while (m-- > 0 && v[m] == x);
    return m + 1;
}

int main() {
    int n, q, c = 1;
    while (scanf("%i %i", &n, &q) != EOF && (n || q)) {
        int v[n];
        for (int i = 0; i < n; i++)
            scanf("%i", &v[i]);
        std::sort(v, v + n);
        printf("CASE# %i:\n", c++);
        for (int i = 0; i < q; i++) {
            int x, p;
            scanf("%i", &x);
            p = fst_occurrence(v, x, 0, n - 1);
            if (p == -1)
                printf("%i not found\n", x);
            else
                printf("%i found at %i\n", x, p + 1);
        }
    }
}
