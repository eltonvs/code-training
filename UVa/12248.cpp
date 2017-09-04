#include <bits/stdc++.h>

#define MAX 200005

std::set<std::pair<int, int>> visited;
std::map<int, int> kids;
int counter, c[MAX], p[MAX], r[MAX];

int index(int k) {
    if (!kids[k])
        kids[k] = counter++, c[kids[k]] = r[kids[k]] = 0, p[kids[k]] = kids[k];
    return kids[k];
}

int get_parent(int v) {
    return p[v] == v ? v : p[v] = get_parent(p[v]);
}

bool union_find(int u, int v) {
    u = get_parent(u), v = get_parent(v), p[u] = v;
    return u != v;
}

int max_scc() {
    int ret = 0;
    for (int i = 1; i < counter; i++)
        ret = std::max(ret, ++r[p[i]]);
    return ret;
}

int main() {
    int k, w, a, b, x, y;

    while ((std::cin >> k >> w) && (k | w)) {
        bool possible = true;
        int cycles = 0;
        counter = 1;
        kids.clear();
        visited.clear();

        for (int i = 0; i < w; i++) {
            std::cin >> a >> b;
            if (a > b) std::swap(a, b);
            x = index(a), y = index(b);
            if (visited.find(std::make_pair(x, y)) != visited.end()) continue;
            cycles += !union_find(x, y);
            visited.insert(std::make_pair(x, y));
            if (++c[x] >= 3 || ++c[y] >= 3) possible = false;
        }
        for (int i = 1; i < counter && possible; i++) get_parent(i);
        if (cycles && max_scc() != k) possible = false;
        std::cout << (possible ? "Y" : "N") << "\n";
    }

    return 0;
}
