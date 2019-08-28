#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
    // Complete this function
    float pos = 0, neg = 0, zero = 0;
    for (auto i = 0u; i < arr.size(); ++i) {
        if (arr[i] == 0) zero++;
        else if (arr[i] > 0) pos++;
        else neg++;
    }
    int tot = arr.size();
    printf("%.6f\n%.6f\n%.6f\n", pos/tot, neg/tot, zero/tot);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       cin >> arr[arr_i];
    }
    plusMinus(arr);
    return 0;
}
