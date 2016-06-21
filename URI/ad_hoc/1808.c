#include <stdio.h>

int main() {
    char nota[101];
    int i, qnt = 0;
    double n = 0;

    scanf("%s", &nota);

    for (i = 0; nota[i] != '\0'; i++) {
    	if (nota[i] == '1' && nota[i + 1] == '0')
        	n += 10, i++;
        else
        	n += nota[i] - '0';
        qnt++;
    }

    printf("%.2f\n", n/qnt);

    return 0;
}
