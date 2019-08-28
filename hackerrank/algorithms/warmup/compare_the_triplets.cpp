#include <bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> a, vector<int> b) {
    // Complete this function
    vector<int> r(2, 0);
    for (int i = 0; i < 3; ++i) {
        if (a[i] > b[i]) {
            r[0]++;
        } else if (a[i] < b[i]) {
            r[1]++;
        }
    }
    return r;
}

int main() {
    int tmp;
    vector<int> v1, v2;
    for (int i = 0; i < 3; ++i) {
        cin >> tmp;
        v1.push_back(tmp);
    }
    for (int i = 0; i < 3; ++i) {
        cin >> tmp;
        v2.push_back(tmp);
    }

    vector<int> result = solve(v1, v2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}
