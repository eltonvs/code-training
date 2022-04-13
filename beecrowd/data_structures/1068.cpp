#include <cstdio>

int main() {
    char line[1005];
    while (fgets(line, 1001, stdin)) {
        int pc = 0;
        for (auto i(0u); line[i] != '\n' && line[i] != '\0'; i++) {
            if (line[i] == ')') pc--;
            else if (line[i] == '(') pc++;
            if (pc < 0) break;
        }
        printf("%scorrect\n", pc == 0 ? "" : "in");
    }
}
