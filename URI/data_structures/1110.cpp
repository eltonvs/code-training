#include <cstdio>
#include <list>


int main() {
    int mask[50], n;
    for (int i = 0; i < 50; i++)
        mask[i] = i + 1;

    while (scanf("%i", &n) != EOF && n) {
        std::list<int> cards(mask, mask + n);
        bool fst = true;
        while (cards.size() > 1) {
            if (fst) {
                fst = false;
                printf("Discarded cards: %i", cards.front());
            } else {
                printf(", %i", cards.front());
            }
            cards.pop_front();
            cards.push_back(cards.front());
            cards.pop_front();
        }
        printf("\nRemaining card: %i\n", cards.front());
    }

    return 0;
}
