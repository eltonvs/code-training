#include <bits/stdc++.h>

struct sortBySize {
    bool operator()(const std::string &s1, const std::string &s2) {
        if (s1.size() > s2.size()) return true;
        if (s1.size() < s2.size()) return false;
        return s1 < s2;
    }
};

std::string to_upper(std::string s) {
    std::string r = "";
    for (auto i = 0u; i < s.size(); i++) {
        r += toupper(s[i]);
    }

    return r;
}

int main() {
    int n, t, p, s;
    std::string tmp, tmp2;

    std::cin >> n;
    sortBySize sbs;

    for (int c = 1; c <= n; c++) {
        std::vector<std::string> topics;
        std::set<std::pair<std::string, std::string>> bad_topics;
        std::cin >> t >> p >> s;

        for (int i = 0; i < t; i++) {
            std::cin >> tmp;
            topics.push_back(to_upper(tmp));
        }

        std::sort(topics.begin(), topics.end(), sbs);

        for (int i = 0; i < p; i++) {
            std::cin >> tmp >> tmp2;

            tmp = to_upper(tmp);
            tmp2 = to_upper(tmp2);

            if (!sbs(tmp, tmp2)) {
                std::swap(tmp, tmp2);
            }

            std::pair<std::string, std::string> p(tmp, tmp2);
            bad_topics.insert(p);
        }

        std::cout << "Set " << c << ":\n";
        if (s == 1) {
            for (int i = 0; i < t; i++) {
                std::cout << topics[i] << "\n";
            }
        } else if (s == 2) {
            for (int i = 0; i < t - 1; i++) {
                for (int j = i + 1; j < t; j++) {
                    auto found = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[i], topics[j]));
                    if (found == bad_topics.end())
                        std::cout << topics[i] << " " << topics[j] << "\n";
                }
            }
        } else if (s == 3) {
            for (int i = 0; i < t - 2; i++) {
                for (int j = i + 1; j < t - 1; j++) {
                    for (int k = j + 1; k < t; k++) {
                        auto found1 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[i], topics[j]));
                        auto found2 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[i], topics[k]));
                        auto found3 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[j], topics[k]));
                        if (found1 == bad_topics.end() && found2 == bad_topics.end() && found3 == bad_topics.end())
                            std::cout << topics[i] << " " << topics[j] << " " << topics[k] << "\n";
                    }
                }
            }
        } else if (s == 4) {
            for (int i = 0; i < t - 3; i++) {
                for (int j = i + 1; j < t - 2; j++) {
                    for (int k = j + 1; k < t - 1; k++) {
                        for (int l = k + 1; l < t; l++) {
                            auto found1 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[i], topics[j]));
                            auto found2 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[i], topics[k]));
                            auto found3 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[i], topics[l]));
                            auto found4 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[j], topics[k]));
                            auto found5 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[j], topics[l]));
                            auto found6 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[k], topics[l]));
                            if (found1 == bad_topics.end() && found2 == bad_topics.end() && found3 == bad_topics.end() && found4 == bad_topics.end() && found5 == bad_topics.end() && found6 == bad_topics.end())
                                std::cout << topics[i] << " " << topics[j] << " " << topics[k] << " " << topics[l] << "\n";
                        }
                    }
                }
            }
        } else {
            for (int i = 0; i < t - 4; i++) {
                for (int j = i + 1; j < t - 3; j++) {
                    for (int k = j + 1; k < t - 2; k++) {
                        for (int l = k + 1; l < t - 1; l++) {
                            for (int m = l + 1; m < t; m++) {
                                auto found1 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[i], topics[j]));
                                auto found2 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[i], topics[k]));
                                auto found3 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[i], topics[l]));
                                auto found4 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[i], topics[m]));
                                auto found5 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[j], topics[k]));
                                auto found6 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[j], topics[l]));
                                auto found7 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[j], topics[m]));
                                auto found8 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[k], topics[l]));
                                auto found9 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[k], topics[m]));
                                auto found0 = std::find(bad_topics.begin(), bad_topics.end(), std::pair<std::string, std::string>(topics[l], topics[m]));
                                if (found1 == bad_topics.end() && found2 == bad_topics.end() && found3 == bad_topics.end() && found4 == bad_topics.end() && found5 == bad_topics.end() && found6 == bad_topics.end() && found7 == bad_topics.end() && found8 == bad_topics.end() && found9 == bad_topics.end() && found0 == bad_topics.end())
                                    std::cout << topics[i] << " " << topics[j] << " " << topics[k] << " " << topics[l] << " " << topics[m] << "\n";
                            }
                        }
                    }
                }
            }
        }

        std::cout << "\n";
    }

    return 0;
}
