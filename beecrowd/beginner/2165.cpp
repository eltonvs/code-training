#include <cstdio>
#include <cstring>

int main() {
    char str[520];

    fgets(str, 510, stdin);

    printf("%s\n", strlen(str) > 140 ? "MUTE" : "TWEET");

    return 0;
}
