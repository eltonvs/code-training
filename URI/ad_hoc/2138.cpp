#include <cstdio>

int main() {
    char str[1005];

    while (scanf("%s", str) != EOF) {
        int b_v = 0, b_i = 0, v[10] = {0};

        for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            v[str[i] - '0']++;
            if (v[str[i] - '0'] > b_v) {
                b_v = v[str[i] - '0'], b_i = str[i] - '0';
            } else if (v[str[i] - '0'] == b_v) {
                b_i = (str[i] - '0') > b_i ? str[i] - '0' : b_i;
            }
        }

        printf("%i\n", b_i);
    }

    return 0;
}
