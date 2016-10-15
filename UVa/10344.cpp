#include <bits/stdc++.h>

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int (*op[])(int, int) = {sum, sub, mult};

bool make_combinations(int a, int b, int c, int d, int e) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    int result = op[l](op[k](op[j](op[i](a, b), c), d), e);
                    if (result == 23) return true;
                }
            }
        }
    }

    return false;
}

int main() {
    int q[5];
    std::vector<int> pos;

    for (int i = 0; i < 5; i++)
        pos.push_back(i);

    while (std::cin >> q[0] >> q[1] >> q[2] >> q[3] >> q[4] && (q[0] || q[1] || q[2] || q[3] || q[4])) {
        bool ok = false;

        for (int i = 0; i < 120 && !ok; i++) {
            ok = make_combinations(q[pos[0]], q[pos[1]], q[pos[2]], q[pos[3]], q[pos[4]]);
            std::next_permutation(pos.begin(), pos.end());
        }

        if (ok)
            std::cout << "Possible\n";
        else
            std::cout << "Impossible\n";
    }

    return 0;
}
