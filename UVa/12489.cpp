#include <bits/stdc++.h>

#define MAX 10005

std::vector<int> A[MAX], B[MAX], NA[MAX], NB[MAX];

int main() {
    int n, a, b;
    bool ans;

    while (std::cin >> n) {
        memset(A, 0, sizeof(A));
        memset(B, 0, sizeof(B));
        memset(NA, 0, sizeof(NA));
        memset(NB, 0, sizeof(NB));

        for (int i = 1; i < n; ++i) {
            std::cin >> a >> b;
            A[a].push_back(b);
            A[b].push_back(a);
        }

        for (int i = 1; i < n; ++i) {
            std::cin >> a >> b;
            B[a].push_back(b);
            B[b].push_back(a);
        }

        for (int i = 1; i <= n; ++i) {
            for (auto j = 0u; j < A[i].size(); ++j) {
                NA[i].push_back(A[A[i][j]].size());
            }
            for (auto j = 0u; j < B[i].size(); ++j) {
                NB[i].push_back(B[B[i][j]].size());
            }
            std::sort(NA[i].begin(), NA[i].end());
            std::sort(NB[i].begin(), NB[i].end());
        }

        std::sort(NA + 1, NA + n + 1);
        std::sort(NB + 1, NB + n + 1);

        ans = true;
        for (int i = 1; i <= n && ans; ++i) {
            if (NA[i] != NB[i]) {
                ans = false;
            }
        }

        std::cout << (ans ? "S\n" : "N\n");
    }

    return 0;
}
