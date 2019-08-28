#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int tallest = 0, count = 0;
    for (int &e : ar) {
        if (e > tallest) tallest = e, count = 1;
        else if (e == tallest) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int ar_i = 0; ar_i < n; ar_i++) {
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
