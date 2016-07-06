#include <iostream>

int main() {
    int val, cent, tmp, fst;
    std::string rst;

    while (std::cin >> val >> cent) {
        fst = 1;
        while (val > 0 || fst) {
            tmp = val%1000;
            if (fst)
                rst = std::string((tmp < 100 ? tmp < 10 ? 2 : 1 : 0), '0') + std::to_string(tmp) + ".", fst = 0;
            else
                rst = std::string((tmp < 100 ? tmp < 10 ? 2 : 1 : 0), '0') + std::to_string(tmp) + "," + rst;
            val /= 1000;
        }
        while (rst[0] == '0' && rst[1] != '.')
            rst.erase(rst.begin());
        if (cent < 10)
            rst += "0" + std::to_string(cent);
        else
            rst += std::to_string(cent);
        std::cout << "$" << rst << "\n";
    }

    return 0;
}
