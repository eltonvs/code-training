#include <iostream>

int main() {
    std::string line, i_op = "<i", i_cl = "</i", b_op = "<b", b_cl = "</b";

    while (std::getline(std::cin, line)) {
        bool i_flag = true, b_flag = true;
        for (auto i(0u); i < line.size(); i++) {
            if (line[i] == '_') {
                line[i] = '>';
                line.insert(i, (i_flag ? i_op : i_cl));
                i_flag = !i_flag;
            } else if (line[i] == '*') {
                line[i] = '>';
                line.insert(i, (b_flag ? b_op : b_cl));
                b_flag = !b_flag;
            }
        }
        std::cout << line << std::endl;
    }

    return 0;
}
