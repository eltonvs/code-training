#include <cstdio>

int main() {
    int n;
    char line[202], bf;

    scanf("%i%c", &n, &bf);

    while (n--) {
        int fq[26] = {0}, b = 0, pos;
        fgets(line, 201, stdin);
        for (auto i = 0u; line[i] != '\n' && line[i] != '\0'; i++) {
            if (line[i] >= 'A' && line[i] <= 'Z')
                pos = line[i] - 'A';
            else if (line[i] >= 'a' && line[i] <= 'z')
                pos = line[i] - 'a';
            else
                continue;
            fq[pos]++;
            if (fq[pos] > b) b = fq[pos];
        }
        for (int i = 0; i < 26; i++)
            if (fq[i] == b) printf("%c", 'a' + i);
        printf("\n");
    }

    return 0;
}
