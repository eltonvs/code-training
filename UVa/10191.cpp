#include <cstdio>
#include <cstring>

int main() {
    int n, c = 1;
    char line[300], v[480];

    while (scanf("%i\n", &n) != EOF) {
        memset(v, 0, 480);
        int ini, end, diff;
        for (int i = 0; i < n; i++) {
            fgets(line, 260, stdin);
            ini = ((line[0] - '0')*10 + line[1] - '0')*60 + (line[3]-'0')*10 + line[4] - '0' - 600;
            end = ((line[6] - '0')*10 + line[7] - '0')*60 + (line[9]-'0')*10 + line[10] - '0' - 600;
            diff = end - ini;
            memset(v + ini, 1, diff);
        }
        int max_t = 0, max_p = 0, curr_t = 0, curr_p = 0, flag = 1;
        for (int i = 0; i < 480; i++) {
            if (v[i] == 1) {
                flag = 1;
                continue;
            }
            if (flag) {
                if (curr_t > max_t) max_t = curr_t, max_p = curr_p;
                curr_p = i, curr_t = 1, flag = 0;
            } else {
                curr_t++;
            }
        }
        if (curr_t > max_t) max_t = curr_t, max_p = curr_p;
        int hf = max_t/60;
        int mf = max_t%60;
        int hi = max_p/60 + 10;
        int mi = max_p%60;

        if (hf) {
            printf("Day #%i: the longest nap starts at %02i:%02i and will last for %i hours and %i minutes.\n", c++, hi, mi, hf, mf);
        } else {
            printf("Day #%i: the longest nap starts at %02i:%02i and will last for %i minutes.\n", c++, hi, mi, mf);
        }
    }

    return 0;
}
