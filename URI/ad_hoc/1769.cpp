#include <iostream>

int main() {
    std::string cpf;

    while (std::cin >> cpf) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0, mult = 1; i < 11; i++) {
            if (i == 3 || i == 7) continue;
            sum1 += mult*(cpf[i] - 48), sum2 += (10-mult)*(cpf[i] - 48), mult++;
        }
        int d1 = (sum1%11)%10, d2 = (sum2%11)%10;
        std::cout << "CPF " << (d1 == cpf[12] - 48 && d2 == cpf[13] - 48 ? "" : "in") << "valido\n";
    }

    return 0;
}
