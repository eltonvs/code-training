#include <bits/stdc++.h>

using namespace std;

long long aVeryBigSum(int n, vector<long> ar) {
    // Complete this function
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += ar[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<long> ar(n);
    for (int ar_i = 0; ar_i < n; ar_i++) {
       cin >> ar[ar_i];
    }
    long long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}
