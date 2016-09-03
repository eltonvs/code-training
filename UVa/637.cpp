#include <bits/stdc++.h>

int main() {
    int n, last, first, page;
    bool front, fst;

    while (std::cin >> n && n) {
        fst = true;
        page = 1;
        last = n;
        first = 1;
        front = true;
        std::cout << "Printing order for " << n << " pages:\n";
        while (last >= first) {
            if (n == 1) {
                std::cout << "Sheet 1, front: Blank, 1\n";
                break;
            } else if (n == 2) {
                std::cout << "Sheet 1, front: Blank, 1\n";
                std::cout << "Sheet 1, back : 2, Blank\n";
                break;
            } else if (n == 3) {
                std::cout << "Sheet 1, front: Blank, 1\n";
                std::cout << "Sheet 1, back : 2, 3\n";
                break;
            } else if (n == 4) {
                std::cout << "Sheet 1, front: 4, 1\n";
                std::cout << "Sheet 1, back : 2, 3\n";
                break;
            } else if (fst && last > 4 && n%4 == 1) {  // 5
                std::cout << "Sheet 1, front: Blank, 1\n";
                std::cout << "Sheet 1, back : 2, Blank\n";
                std::cout << "Sheet 2, front: Blank, 3\n";
                std::cout << "Sheet 2, back : 4, " << last-- << "\n";
                first += 4;
                fst = false;
                page = 3;
            } else if (fst && last > 4 && n%4 == 2) {  // 6
                std::cout << "Sheet 1, front: Blank, 1\n";
                std::cout << "Sheet 1, back : 2, Blank\n";
                std::cout << "Sheet 2, front: " << last-- << ", 3\n";
                std::cout << "Sheet 2, back : 4, " << last-- << "\n";
                first += 4;
                fst = false;
                page = 3;
            } else if (fst && last > 4 && n%4 == 3) {  // 7
                std::cout << "Sheet 1, front: Blank, 1\n";
                std::cout << "Sheet 1, back : 2, " << last-- << "\n";
                std::cout << "Sheet 2, front: " << last-- << ", 3\n";
                std::cout << "Sheet 2, back : 4, " << last-- << "\n";
                first += 4;
                fst = false;
                page = 3;
            } else {
                if (front) {
                    std::cout << "Sheet " << page << ", front: " << last << ", " << first << "\n";
                } else {
                    std::cout << "Sheet " << page << ", back : " << first << ", " << last << "\n";
                    page++;
                }
                last--;
                first++;
                front = !front;
            }
        }
    }

    return 0;
}

