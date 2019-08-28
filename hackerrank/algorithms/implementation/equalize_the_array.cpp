#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector<int> arr) {
    // Complete this function
    vector<int> dist(100, 0);
    for (auto i = 0u; i < arr.size(); ++i) {
        dist[arr[i]]++;
    }
    int bigger = 0;
    for (auto i = 0u; i < dist.size(); ++i) {
        if (dist[i] > bigger) bigger = dist[i];
    }
    return arr.size() - bigger;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       cin >> arr[arr_i];
    }
    int result = equalizeArray(arr);
    cout << result << endl;
    return 0;
}
