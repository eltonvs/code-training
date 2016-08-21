#include <cstdio>
#include <vector>
#include <numeric>

int main() {
    int s, b;
    std::vector<int> right(100001);
    std::vector<int> left(100001);

    while (scanf("%i %i", &s, &b) != EOF && (s || b)) {
        // Fills each position of vector with the soldier number
        std::iota(right.begin(), right.begin() + s + 1, 1);
        std::iota(left.begin(), left.begin() + s + 1, -1);
        right[s] = -1;
        left[1]  = -1;

        int l, r;
        // Read the left and right values (killed soldiers)
        for (int i = 0; i < b; i++) {
            scanf("%i %i", &l, &r);
            right[left[l]] = right[r];
            left[right[r]] = left[l];
            if (left[l] == -1)
                printf("* ");
            else
                printf("%i ", left[l]);
            if (right[r] == -1)
                printf("*\n");
            else
                printf("%i\n", right[r]);
        }

        printf("-\n");
    }

    return 0;
}
