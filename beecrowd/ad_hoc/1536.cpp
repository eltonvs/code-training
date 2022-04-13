#include <iostream>

int main() {
    int n;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int t1[2], t2[2], p_t1 = 0, p_t2 = 0, sg_t1 = 0, sg_t2 = 0, w;
        char buf;
        std::cin >> t1[0] >> buf >> t2[0];
        std::cin >> t2[1] >> buf >> t1[1];

        for (int i = 0; i < 2; i++) {
            sg_t1 += t1[i] - t2[i], sg_t2 += t2[i] - t1[i];
            if (t1[i] == t2[i])
                p_t1++, p_t2++;
            else if (t1[i] > t2[i])
                p_t1 += 3;
            else
                p_t2 += 3;
        }
        if (p_t1 > p_t2 || sg_t1 > sg_t2)
            w = 1;
        else if (p_t2 > p_t1 || sg_t2 > sg_t1)
            w = 2;
        else if (t1[1] > t2[0])
            w = 1;
        else if (t2[0] > t1[1])
            w = 2;
        else
            w = 0;

        if (w == 0)
            std::cout << "Penaltis\n";
        else
            std::cout << "Time " << w << "\n";
    }

    return 0;
}
