#include <iostream>

int main() {
    std::string line;

    while (std::getline(std::cin, line)) {
        for (auto i(0u); i < line.size(); i++) {
            if (line[i] == 32) continue;
            else if (line[i] == 86) line[i] -= 19;
            else if (line[i] == 83) line[i] -= 18;
            else if (line[i] == 61) line[i] -= 16;
            else if (line[i] == 82) line[i] -= 13;
            else if (line[i] == 78) line[i] -= 12;
            else if (line[i] == 91) line[i] -= 11;
            else if (line[i] == 79 || line[i] == 87) line[i] -= 6;
            else if (line[i] == 89) line[i] -= 5;
            else if (line[i] == 46 || line[i] == 70 || line[i] == 74 || line[i] == 84 || line[i] == 93) line[i] -= 2;
            else if (line[i] == 47 || (line[i] >= 50 && line[i] <= 57) || line[i] == 71 || line[i] == 72 || line[i] == 75 || line[i] == 76 || line[i] == 80) line[i]--;
            else if (line[i] == 77 || line[i] == 92) line[i]++;
            else if (line[i] == 88) line[i] += 2;
            else if (line[i] == 45) line[i] += 3;
            else if (line[i] == 85) line[i] += 4;
            else if (line[i] == 48) line[i] += 9;
            else if (line[i] == 73) line[i] += 12;
            else if (line[i] == 68) line[i] += 15;
            else if (line[i] == 59) line[i] += 17;
            else if (line[i] == 69) line[i] += 18;
            else if (line[i] == 39 || line[i] == 66) line[i] += 20;
            else if (line[i] == 67) line[i] += 21;
            else if (line[i] == 44) line[i] += 33;
            else if (line[i] == 49) line[i] += 47;
            else line[i] += 49;
        }
        std::cout << line << "\n";
    }

    return 0;
}
