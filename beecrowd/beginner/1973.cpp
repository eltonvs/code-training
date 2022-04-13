#include <iostream>

int main() {
    int n, l_p = 0, i;
    long long int tot = 0;
    std::cin >> n;

    int s[n], visited[n];

    for (i = 0; i < n; i++) {
        std::cin >> s[i];
        visited[i] = 0, tot += s[i];
    }

    i = 0;
    while (i >= 0 && i < n) {
        visited[i] = 1;
        if (s[i]%2 == 0) {
            if (s[i] > 0)
                s[i]--, tot--;
            i--;
        } else {
            s[i]--, tot--, i++;
        }
    }

    for (i = 0; i < n; i++)
        l_p += visited[i];

    std::cout << l_p << " " << tot << std::endl;

    return 0;
}
