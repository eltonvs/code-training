#include <bits/stdc++.h>

struct Team {
    int received_points = 0;
    int scored_points = 0;
    int ponctuation = 0;

    void add_match(int scored, int received) {
        scored_points += scored;
        received_points += received;
        ponctuation += scored > received ? 2 : 1;
    }

    int get_scored() const {
        return scored_points;
    }

    int get_received() const {
        return received_points;
    }

    int get_ponctuation() const {
        return ponctuation;
    }

    double get_average() const {
        if (received_points == 0) return scored_points;
        return scored_points*1.0/received_points;
    }
};

int main() {
    int n, x, y, z, w, instance = 1;
    std::map<int, Team> championship;

    while (std::cin >> n && n) {
        championship = std::map<int, Team>();
        for (int i = 0; i < n*(n-1)/2; i++) {
            std::cin >> x >> y >> z >> w;
            championship[x].add_match(y, w);
            championship[z].add_match(w, y);
        }

        std::vector<std::pair<int, Team>> map_copy(championship.begin(), championship.end());
        std::sort(map_copy.begin(), map_copy.end(),
                [](const std::pair<int, Team> &a, const std::pair<int, Team> &b) {
                    if (a.second.get_ponctuation() > b.second.get_ponctuation()) return true;
                    else if (a.second.get_ponctuation() < b.second.get_ponctuation()) return false;
                    else if (a.second.get_average() > b.second.get_average()) return true;
                    else if (a.second.get_average() < b.second.get_average()) return false;
                    else if (a.second.get_scored() > b.second.get_scored()) return true;
                    else if (a.second.get_scored() < b.second.get_scored()) return false;
                    else return a.first > b.first;
                });
        if (instance > 1)
            std::cout << "\n";
        std::cout << "Instancia " << instance++ << "\n";
        for (auto i = 0u; i < map_copy.size(); i++) {
            std::cout << map_copy[i].first << (i == map_copy.size() - 1 ? "\n" : " ");
        }
    }

    return 0;
}
