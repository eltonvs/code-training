#include <iostream>
#include <cstdio>

int main() {
    std::string full_text = "", line;
    bool op = false;

    while (std::getline(std::cin, line)) {
        // Proccess lines
        for (auto i = 0u; i < line.size(); i++) {
            if (line[i] == '"') {
                printf("%s", op ? "''" : "``");
                op = !op;
            } else {
                printf("%c", line[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
