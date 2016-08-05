#include <cstdio>
#include <cstring>

int main() {
    int n, a, b, c = 1;
    char str[1000005];
    int map[1000005];

    while (scanf("%s", str) != EOF) {
        int j = 0;
        scanf("%i", &n);
        printf("Case %i:\n", c++);
        map[0] = 0;
        for (int i = 1; str[i] != '\0'; i++)
            map[i] = (str[i] == str[i - 1]) ? j : ++j;
        while (n--) {
            scanf("%i %i", &a, &b);
            printf("%s\n", map[a] == map[b] ? "Yes" : "No");
        }
    }

    return 0;
}
