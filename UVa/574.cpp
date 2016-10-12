#include <bits/stdc++.h>

int limit, n_numbers;
std::vector<int> numbers;
std::set<std::vector<int>> solutions;

void find_different_sums(std::vector<int> s, int sum, int c) {
    if (c >= n_numbers)
        return;

    // Add current number
    sum += numbers[c];
    s.push_back(numbers[c]);

    // Current is bigger than limit, remove the last added and try again
    if (sum > limit) {
        sum -= numbers[c];
        s.pop_back();

        find_different_sums(s, sum, c + 1);
    }

    // Reach the limit
    if (sum == limit)
        solutions.insert(s);

    // Not reach limit yet
    if (sum < limit) {
        for (int i = c + 1; i < n_numbers; i++)
            if (sum + numbers[i] <= limit)
                find_different_sums(s, sum, i);
    }
}

int main() {
    int tmp;

    while (std::cin >> limit && limit) {
        std::cin >> n_numbers;

        for (int i = 0; i < n_numbers; i++) {
            std::cin >> tmp;
            numbers.push_back(tmp);
        }

        std::sort(numbers.begin(), numbers.end(), std::greater<int>());

        for (int i = 0; i < n_numbers; i++)
            find_different_sums(std::vector<int>(), 0, i);

        std::cout << "Sums of " << limit << ":\n";
        // show solutions
        if (solutions.size())
            for (auto s = solutions.rbegin(); s != solutions.rend(); s++)
                for (int i = 0; i < s->size(); i++)
                    std::cout << s->at(i) << (i == s->size() - 1 ? "\n" : "+");
        else
            std::cout << "NONE\n";

        numbers.clear();
        solutions.clear();
    }

    return 0;
}
