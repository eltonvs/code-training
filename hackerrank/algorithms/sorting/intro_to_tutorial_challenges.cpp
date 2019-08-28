#include <bits/stdc++.h>

using namespace std;

int introTutorial(int V, vector <int> arr) {
    // Complete this function
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int m = (l + r)/2;
        if (arr[m] == V) return m;
        else if (arr[m] > V) r = m - 1;
        else l = m + 1;
    }
    return -1;  // should never happen, since V is guaranteed to be in array
}

int main() {
    int V;
    cin >> V;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       cin >> arr[arr_i];
    }
    int result = introTutorial(V, arr);
    cout << result << endl;
    return 0;
}
