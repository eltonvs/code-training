#include <iostream>

int main() {
    int n;

    while (std::cin >> n && n) {
        int peaks[n], n_peaks = 0;
        for (int i = 0; i < n; i++)
            std::cin >> peaks[i];
        for (int i = 0; i < n; i++) {
            int prev = (i == 0) ? n - 1 : i - 1,
                next = (i == n - 1) ? 0 : i + 1;
            if ((peaks[prev] < peaks[i] && peaks[i] > peaks[next]) || (peaks[prev] > peaks[i] && peaks[i] < peaks[next]))
                n_peaks++;
        }
        std::cout << n_peaks << "\n";
    }

    return 0;
}
