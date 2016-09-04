#include <bits/stdc++.h>

#define RIGHT 0
#define LEFT 1

int main() {
    int c, tmp;
    std::string lr;
    std::queue<std::pair<int, int>> queues[2];  // [0] = right | [1] = left

    std::cin >> c;

    while (c--) {
        int n, t, m;
        std::cin >> n >> t >> m;

        for (int i = 0; i < m; i++) {
            std::cin >> tmp >> lr;
            queues[lr[0] == 'l'].push(std::pair<int, int>(i, tmp));
        }

        int curr_pos = LEFT, curr_time = 0, final_list[m];

        while (!queues[RIGHT].empty() || !queues[LEFT].empty()) {
            int pos;

            if (!queues[RIGHT].empty() && !queues[LEFT].empty()) {
                if (queues[curr_pos].front().second <= curr_time || queues[LEFT].front().second == queues[RIGHT].front().second)
                    pos = curr_pos;
                else
                    pos = queues[LEFT].front().second < queues[RIGHT].front().second;
            } else {
                pos = queues[RIGHT].empty();
            }

            curr_time = std::max(curr_time, queues[pos].front().second);

            if (curr_pos != pos) curr_pos = pos, curr_time += t;

            for (int i = 0; i < n; i++) {
                if (queues[pos].empty() || queues[pos].front().second > curr_time) {
                    break;
                }

                final_list[queues[pos].front().first] = curr_time + t;
                queues[pos].pop();
            }

            curr_time += t, curr_pos = !pos;
        }

        // Print final list
        for (int i = 0; i < m; i++)
            std::cout << final_list[i] << std::endl;

        if (c)
            std::cout << std::endl;
    }

    return 0;
}
