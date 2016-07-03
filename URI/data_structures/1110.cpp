#include <cstdio>
#include <list>


int main() {
    int mask[50], n;
    for (int i = 0; i < 50; i++)
        mask[i] = i + 1;

    while (scanf("%i", &n) != EOF && n) {
        std::list<int> cards(mask, mask + n);
        printf("Discarded cards: ");
        bool fst = true;
        while (cards.size() > 1) {
            int tmp = cards.front();
            cards.pop_front();
            if (fst) {
                fst = false;
                printf("%i", tmp);
            } else {
                printf(", %i", tmp);
            }
            tmp = cards.front();
            cards.pop_front();
            cards.push_back(tmp);
        }
        printf("\nRemaining card: %i\n", cards.front());
    }

    return 0;
}
