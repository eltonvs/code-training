#include <bits/stdc++.h>

struct Team {
    std::string name;
    int points;
    int wins;
    int ties;
    int losses;
    int scored_goals;
    int against_goals;

    Team(std::string _n) : name(_n), points(0), wins(0), ties(0), losses(0), scored_goals(0), against_goals(0) {}

    void addGame(int gp, int gc) {
        scored_goals += gp;
        against_goals += gc;
        if (gp > gc)
            wins++, points += 3;
        else if (gp == gc)
            ties++, points++;
        else
            losses++;
    }

    int getNumGames() const {
        return wins + ties + losses;
    }

    int getGoalsDifference() const {
        return scored_goals - against_goals;
    }
};

struct TeamComp {
    bool operator()(const Team &l, const Team &r) const {
        if (l.points != r.points)
            return l.points > r.points;
        else if (l.wins != r.wins)
            return l.wins > r.wins;
        else if (l.getGoalsDifference() != r.getGoalsDifference())
            return l.getGoalsDifference() > r.getGoalsDifference();
        else if (l.scored_goals != r.scored_goals)
            return l.scored_goals > r.scored_goals;
        else if (l.getNumGames() != r.getNumGames())
            return l.getNumGames() < r.getNumGames();

        std::string lname, rname;

        lname.resize(l.name.size());
        rname.resize(r.name.size());

        std::transform(l.name.begin(), l.name.end(), lname.begin(), ::tolower);
        std::transform(r.name.begin(), r.name.end(), rname.begin(), ::tolower);

        return lname < rname;
    }
};

int main() {
    int n;
    std::string line, tournament_name, tmp1;

    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        int n_teams, n_games;
        std::map<std::string, Team> teams;

        std::getline(std::cin, tournament_name);

        std::cin >> n_teams;
        std::cin.ignore();

        for (int i = 0; i < n_teams; i++) {
            std::getline(std::cin, line);
            teams.insert(std::pair<std::string, Team>(line, Team(line)));
        }

        std::cin >> n_games;
        std::cin.ignore();

        for (int i = 0; i < n_games; i++) {
            int pos, t1, t2;
            std::getline(std::cin, line);

            // Find for the first '#'
            pos = line.find('#');

            // Gets the string til the '#'
            tmp1 = line.substr(0, pos);  // First team name

            // Ignore all from 0 to '#'
            line = line.substr(pos + 1);

            // Find for '@'
            pos = line.find('@');
            // Gets the integer value
            t1 = std::stoi(line.substr(0, pos));  // Team 1 goals
            // Ignore...
            line = line.substr(pos + 1);


            pos = line.find('#');
            t2 = std::stoi(line.substr(0, pos));  // Team 2 goals
            line = line.substr(pos + 1);  // Second team name

            teams.find(tmp1)->second.addGame(t1, t2);
            teams.find(line)->second.addGame(t2, t1);
        }

        // Sort into a set
        std::set<Team, TeamComp> teams_sorted;
        for (auto it = teams.begin(); it != teams.end(); it++) {
            teams_sorted.insert(it->second);
        }

        std::cout << tournament_name << "\n";
        int i = 1;
        for (auto it = teams_sorted.begin(); it != teams_sorted.end(); it++) {
            std::cout << i++ << ") " << it->name << " " << it->points << "p, " << it->getNumGames() << "g (" << it->wins << "-" << it->ties << "-" << it->losses << "), " << it->getGoalsDifference() << "gd (" << it->scored_goals << "-" << it->against_goals << ")\n";
        }

        if (n)
            std::cout << std::endl;

        teams.clear();
        teams_sorted.clear();
    }

    return 0;
}
