#include <cstdio>

int main() {
    int n, m, players[10000] = {0};

    while (scanf("%i %i", &n, &m) != EOF && (n || m)) {
        int tmp, b = 0, s_b = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%i", &tmp);
                players[tmp - 1]++;
                if (players[tmp - 1] > b)
                    b = players[tmp - 1];
            }
        }
        for (int i = 0; i < 10000; i++)
            if (players[i] > s_b && players[i] < b)
                s_b = players[i];
        for (int i = 0; i < 10000; i++) {
            if (players[i] == s_b)
                printf("%i ", i + 1);
            players[i] = 0;
        }
        printf("\n");
    }

    return 0;
}
