#include <iostream>
#include <string>

int main() {
    int n;

    for (int i = 1; std::cin >> n; i++) {
        std::string name(21, 'z'), cur_name;
        int min_p = 11, cur_p;

        for (int j = 0; j < n; j++) {
            std::cin >> cur_name >> cur_p;
            if (cur_p < min_p || cur_p == min_p && cur_name > name)
                name = cur_name, min_p = cur_p;
        }

        std::cout << "Instancia " << i << std::endl;
        std::cout << name << "\n\n";
    }
}
