#include <bits/stdc++.h>

int main() {
    int a[3], m_sum = -1, tmp;

    for (int i = 0; i < 3; i++)
        std::cin >> a[i];

    for (int i = 0; i < 3; i++) {
        int b = (i + 1)%3, c = (i + 2)%3;
        tmp = 2*abs(b-i)*a[b] + 2*abs(c-i)*a[c];
        if (m_sum == -1 || tmp < m_sum) m_sum = tmp;
    }

    std::cout << m_sum << "\n";

    return 0;
}
