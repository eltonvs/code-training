#include <bits/stdc++.h>

int book_map[10000000];

int main() {
    int n, m, tmp, fst, snd, diff;

    while (std::cin >> n) {
        diff = -1;
        memset(book_map, 0, sizeof(book_map));
        std::vector<int> books;
        for (int i = 0; i < n; i++) {
            std::cin >> tmp;
            books.push_back(tmp);
            book_map[tmp]++;
        }

        std::cin >> m;

        for (int b : books) {
            tmp = m - b;
            if (tmp > 0 && b > 0 && book_map[tmp] > 0) {
                if (tmp == b && book_map[tmp] == 1)
                    continue;
                if (diff < 0 || abs(tmp - b) < diff)
                    diff = abs(tmp - b), fst = std::min(tmp, b), snd = std::max(tmp, b);

                if (diff == 0) break;
            }
        }

        std::cout << "Peter should buy books whose prices are " << fst << " and " << snd << ".\n\n";
    }

    return 0;
}
