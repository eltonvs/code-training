#include <cstdio>
#include <algorithm>

int main() {
    long n1, n2;
    short int people[3000000];

    scanf("%li", &n1);

    while (n1--) {
        scanf("%li", &n2);
        for (int i = 0; i < n2; i++) {
            scanf("%hi", &people[i]);
        }
        std::sort(people, people + n2);
        for (long int i = 0; i < n2; i++) {
            printf("%hi%c", people[i], (i == n2 - 1 ? '\n' : ' '));
        }
    }

    return 0;
}
