#include <iostream>

int main() {
    int n, w;
    std::string p1, p2;

    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, p1);
        std::getline(std::cin, p2);
        if (p1 == p2)
            w = p1 == "ataque" ? -1 : p1 == "papel" ? 3 : 0;
        else if (p1 == "ataque")
            w = 1;
        else if (p2 == "ataque")
            w = 2;
        else if (p1 == "papel")
            w = 2;
        else if (p2 == "papel")
            w = 1;

        if (w == -1)
            std::cout << "Aniquilacao mutua\n";
        else if (w == 0)
            std::cout << "Sem ganhador\n";
        else if (w == 3)
            std::cout << "Ambos venceram\n";
        else
            std::cout << "Jogador " << w << " venceu\n";
    }

    return 0;
}
