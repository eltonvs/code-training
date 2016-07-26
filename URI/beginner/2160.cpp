#include <cstdio>
#include <cstring>

int main() {
    char str[505];

    fgets(str, 502, stdin);

    printf("%s\n", strlen(str) > 81 ? "NO" : "YES");

    return 0;
}
