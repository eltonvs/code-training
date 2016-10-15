#include <bits/stdc++.h>

struct Player {
    std::string name;
    int at, df;
};

struct cmpPlayers {
    bool operator()(const Player &p1, const Player &p2) {
        if (p1.at > p2.at) return true;
        if (p2.at > p1.at) return false;
        if (p1.df < p2.df) return true;
        if (p2.df < p1.df) return false;

        return p1.name < p2.name;
    }
};

int main() {
    int n;

    std::cin >> n;

    for (int c = 1; c <= n; c++) {
        std::vector<Player> players;
        std::vector<std::string> at, df;

        for (int i = 0; i < 10; i++) {
            Player p;
            std::cin >> p.name >> p.at >> p.df;
            players.push_back(p);
        }

        std::sort(players.begin(), players.end(), cmpPlayers());

        std::cout << "Case " << c << ":\n";
        for (int i = 0; i < 5; i++)
            at.push_back(players[i].name);
        for (int i = 5; i < 10; i++)
            df.push_back(players[i].name);

        std::sort(at.begin(), at.end());
        std::sort(df.begin(), df.end());

        std::cout << "(";
        for (int i = 0; i < 5; i++)
            std::cout << at[i] << (i == 4 ? ")\n" : ", ");
        std::cout << "(";
        for (int i = 0; i < 5; i++)
            std::cout << df[i] << (i == 4 ? ")\n" : ", ");
    }

    return 0;
}
