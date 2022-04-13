#include <cstdio>
#include <cstring>

int main() {
    int n;
    char str[10005];

    scanf("%i", &n);

    while (n--) {
        scanf("%s", str);
        printf("%.2f\n", strlen(str)/100.0);
    }

    return 0;
}
