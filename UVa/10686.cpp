#include <bits/stdc++.h>

struct Category {
    std::string name;
    int p;
    int n_matches;

    Category() : name(""), p(0), n_matches(0) {}
    Category(std::string _n, int _p) : name(_n), p(_p), n_matches(0) {}

    void increaseMatches() {
        n_matches++;
    }

    bool isValid() {
        return n_matches >= p;
    }

    void reset(std::string _n, int _p) {
        name = _n;
        p = _p;
        n_matches = 0;
    }
};

void filter_string(std::string &s) {
    for (auto i = 0u; i < s.size(); i++)
        if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z'))
            s[i] = ' ';
}

int main() {
    int n;
    std::string tmp_name, line;
    Category categories[20];

    std::cin >> n;

    while (n--) {
        int n_cat, w, p;
        std::cin >> n_cat;

        std::map<std::string, std::vector<std::pair<int, bool> > > c_map;

        for (int i = 0; i < n_cat; i++) {
            std::cin >> tmp_name >> w >> p;
            categories[i].reset(tmp_name, p);
            for (int j = 0; j < w; j++) {
                std::cin >> tmp_name;
                c_map[tmp_name].push_back(std::pair<int, bool>(i, false));
            }
        }

        std::cin.ignore(100, '\n');

        while (std::getline(std::cin, line)) {
            if (line == "")
                break;
            filter_string(line);
            std::stringstream ss(line);
            while (ss >> tmp_name) {
                if (c_map.find(tmp_name) != c_map.end()) {
                    for (auto it = c_map[tmp_name].begin(); it != c_map[tmp_name].end(); it++) {
                        if (!it->second) {
                            it->second = true;
                            categories[it->first].increaseMatches();
                        }
                    }
                }
            }
        }

        int f = 0;
        for (int i = 0; i < n_cat; i++) {
            if (categories[i].isValid()) {
                if (f++ == 0)
                    std::cout << categories[i].name;
                else
                    std::cout << "," << categories[i].name;
            }
        }

        if (!f)
            std::cout << "SQF Problem.\n";
        else
            std::cout << "\n";
    }

    return 0;
}

