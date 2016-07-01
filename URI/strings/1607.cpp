#include <cstdio>
#include <cstring>

int main() {
    int n;
    char a[10002], b[10002];

    scanf("%i", &n);

    while (n--) {
        int sum = 0;
        scanf("%s %s", &a, &b);
        for (auto i(0u); i < strlen(a); i++)
            sum += (b[i] - a[i] + 26)%26;
        printf("%i\n", sum);
    }

    return 0;
}
