#include <cstdio>
#include <algorithm>

int main() {
    int n, tmp;

    scanf("%i", &n);

    int odd[n], even[n], odd_sz = 0, even_sz = 0;

    for (int i = 0; i < n; i++) {
        scanf("%i", &tmp);
        if (tmp%2 == 0)
            even[even_sz++] = tmp;
        else
            odd[odd_sz++] = tmp;
    }

    std::sort(even, even + even_sz);
    std::sort(odd, odd + odd_sz);

    for (int i = 0; i < even_sz; i++)
        printf("%i\n", even[i]);
    for (int i = odd_sz - 1; i >= 0; i--)
        printf("%i\n", odd[i]);

    return 0;
}
