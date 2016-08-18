#include <cstdio>
#include <vector>
#include <numeric>

int main() {
    int s, b;
    std::vector<int> line;

    while (scanf("%i %i", &s, &b) != EOF && (s || b)) {
        // Resizes vector to fit s soldiers
        line.resize(s);
        // Fills each position of vector with the soldier number
        std::iota(line.begin(), line.end(), 1);

        int l, r;
        // Read the left and right values (killed soldiers)
        for (int i = 0; i < b; i++) {
            scanf("%i %i", &l, &r);
            auto fst = std::lower_bound(line.cbegin(), line.cend(), l);
            auto lst = std::lower_bound(fst, line.cend(), r);
            if (fst == line.cbegin())
                printf("* ");
            else
                printf("%i ", *(fst - 1));
            if (lst + 1 == line.cend())
                printf("*\n");
            else
                printf("%i\n", *(lst + 1));
            line.erase(fst, lst + 1);
        }

        printf("-\n");
    }

    return 0;
}
