#include <iostream>
#include <iomanip>

int main() {
    int n;
    float v, m_v = 0, m_p = 0;
    std::string fruits;

    std::ios::sync_with_stdio(false);
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int kg = 0, wsp = 1;

        std::cin >> v;
        std::cin.ignore();
        std::getline(std::cin, fruits);

        for (auto i = 0u; i < fruits.size(); i++)
            if (fruits[i] == ' ' && !wsp)
                wsp = 1, kg++;
            else if (fruits[i] != ' ')
                wsp = 0;

        if (wsp == 0) kg++;

        std::cout << "day " << i + 1 << ": " << kg << " kg\n";
        m_p += kg, m_v += v;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << m_p/n << " kg by day\n";
    std::cout << "R$ " << m_v/n << " by day\n";

    return 0;
}
