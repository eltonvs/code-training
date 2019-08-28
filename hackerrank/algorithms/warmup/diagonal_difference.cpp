#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> a) {
    // Complete this function
    int d1 = 0, d2 = 0;
    for (auto i = 0u; i < a.size(); ++i) {
        d1 += a[i][i];
        d2 += a[i][a.size() - i - 1];
    }
    return abs(d1 - d2);
}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for (int a_i = 0; a_i < n; a_i++) {
       for (int a_j = 0; a_j < n; a_j++) {
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;
}
