#include <iostream>

int main() {
    short int n, aux, i = 0;
    char nb[4][2] = {{'I', 'V'}, {'X', 'L'}, {'C', 'D'}, {'M', 'V'}};
    std::string r = "";

    std::cin >> n;

    while (n != 0) {
        aux = n%10;
        if (aux == 5)
            r = std::string(1, nb[i][1]) + r;
        else if (aux == 4)
            r = std::string(1, nb[i][0]) + std::string(1, nb[i][1]) + r;
        else if (aux == 9)
            r = std::string(1, nb[i][0]) + std::string(1, nb[i + 1][0]) + r;
        else if (aux < 5)
            r = std::string(aux, nb[i][0]) + r;
        else
            r = std::string(1, nb[i][1]) + std::string(aux - 5, nb[i][0]) + r;
        n = n/10, i++;
    }

    std::cout << r << "\n";

    return 0;
}
