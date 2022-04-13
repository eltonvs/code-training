#include <cstdio>
#include <cstring>
#include <vector>

std::vector<int> vet[1000010];

int main() {
    int n, m;
    while (scanf("%i %i", &n, &m) != EOF) {
        memset(vet, 0, sizeof vet);
        for (int i = 1, tmp; i <= n; i++) {
            scanf("%i", &tmp);
            vet[tmp].push_back(i);
        }
        while (m--) {
            int k, v;
            scanf("%i %i", &k, &v);
            printf("%i\n", (k <= vet[v].size() ? vet[v][k - 1] : 0));
        }
    }
}
