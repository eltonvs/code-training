#include <bits/stdc++.h>

int best_sum, limit, n_tracks;
std::vector<int> tracks, best_selection;

void find_best_setlist(std::vector<int> s, int sum, int c) {
    if (c >= n_tracks)
        return;

    // Add current track
    sum += tracks[c];
    s.push_back(tracks[c]);

    // Current is bigger than limit, remove the last added and try again
    if (sum > limit) {
        sum -= tracks[c];
        s.pop_back();

        find_best_setlist(s, sum, c + 1);
    }

    // I'm better than best, so update him
    if (best_selection.size() <= 20 && sum > best_sum) {
        best_sum = sum, best_selection = s;
        if (best_sum == limit) return;
    }

    // Still have remaining space
    if (sum < limit) {
        for (int i = c + 1; i < n_tracks; i++)
            if (sum + tracks[i] <= limit)
                find_best_setlist(s, sum, i);
    }
}

int main() {
    int tmp;

    while (std::cin >> limit) {
        std::cin >> n_tracks;

        for (int i = 0; i < n_tracks; i++) {
            std::cin >> tmp;
            tracks.push_back(tmp);
        }

        best_sum = 0;

        for (int i = 0; i < n_tracks; i++)
            find_best_setlist(std::vector<int>(), 0, i);

        for (int &track : best_selection)
            std::cout << track << " ";
        std::cout << "sum:" << best_sum << "\n";

        tracks.clear();
    }

    return 0;
}
