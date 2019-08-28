#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    int date[3], turn = 0;
    bool isAM;
    for (auto i = 0u; i < s.size() - 1; ++i) {
        if (s[i] == ':') continue;
        if (i == 8) {
            isAM = s[i] == 'A';
            break;
        }
        date[turn] = (s[i] - '0')*10 + s[i + 1] - '0';
        ++turn, ++i;
    }

    if (!isAM) {
        date[0] += 12;
        if (date[0] == 24) date[0] = 12;
    } else if (date[0] == 12) {
        date[0] = 0;
    }

    string ret = "";
    for (int i = 0; i < 3; ++i) {
        ret += (date[i] < 10 ? "0" : "") + to_string(date[i]) + (i != 2 ? ":" : "");
    }
    return ret;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
