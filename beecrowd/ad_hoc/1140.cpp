#include <iostream>

int main() {
    std::string ln;

    while (std::getline(std::cin, ln) && ln != "*") {
        bool wsp = true, ans = true, f = false;
        char fst;
        for (auto i(0u); i < ln.size(); i++) {
            if (ln[i] == ' ')
                wsp = true;
            else if (wsp && !f)
                fst = ln[i] <= 90 ? ln[i] + 32 : ln[i], f = true, wsp = false;
            else if (wsp)
                ans &= (ln[i] == fst || ln[i] + 32 == fst), wsp = false;
        }
        std::cout << (ans ? "Y" : "N") << "\n";
    }

    return 0;
}
