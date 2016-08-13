#include <bits/stdc++.h>

struct Problem {
    int solved_time;
    bool solved;

    Problem(int _time = 0, bool _s = false) : solved_time(_time), solved(_s) {}
};

struct Team {
    int id;
    int solved;
    int points;
    std::vector<Problem> submissions;
    bool active;

    Team(int _points = 0, bool _active = false) : id(0), solved(0), points(_points), submissions(9), active(_active) {}
};


int main() {
    int n;
    std::string line;
    std::vector<Team> teams(100);

    int team_id, problem_id, e_time;
    char status;

    std::cin >> n;
    std::cin.ignore();
    std::cin.ignore();

    while (n--) {
        // Do the magic here
        while (std::getline(std::cin, line) && line != "\n" && line != "") {
            std::stringstream ss(line);
            ss >> team_id >> problem_id >> e_time >> status;
            teams[team_id - 1].id = team_id;
            teams[team_id - 1].active = true;
            if (!teams[team_id - 1].submissions[problem_id - 1].solved) {
                if (status == 'C') {
                    teams[team_id - 1].submissions[problem_id - 1].solved_time += e_time;
                    teams[team_id - 1].submissions[problem_id - 1].solved = true;
                }
                if (status == 'I') {
                    teams[team_id - 1].submissions[problem_id - 1].solved_time += 20;
                }
            }
        }

        for (int i = 0; i < 100; i++) {
            if (teams[i].active) {
                for (int j = 0; j < 9; j++) {
                    if (teams[i].submissions[j].solved)
                        teams[i].points += teams[i].submissions[j].solved_time,
                        teams[i].solved++;
                    teams[i].submissions[j].solved = false;
                    teams[i].submissions[j].solved_time = 0;
                }
            }
        }

        std::sort(teams.begin(), teams.end(), [](Team a, Team b) {
            if (a.solved > b.solved) return true;
            if (a.solved < b.solved) return false;
            if (a.points > b.points) return false;
            if (a.points < b.points) return true;
            if (a.id < b.id) return true;
            if (a.id > b.id) return false;
            return false;
        });

        // Proccess data and clear vector
        for (int i = 0; i < 100; i++) {
            if (teams[i].active) {
                std::cout << teams[i].id << " " << teams[i].solved << " " << teams[i].points << "\n";
                teams[i].id = 0;
                teams[i].solved = 0;
                teams[i].points = 0;
                teams[i].active = false;
            }
        }
        if (n != 0)
            std::cout << std::endl;
    }

    return 0;
}
