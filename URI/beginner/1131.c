#include <stdio.h>

int main() {
    int r = 1, c = 0, vg = 0, vi = 0, e = 0, i, g;

    while (r == 1) {
        scanf("%i %i", &i, &g);
        c++;
        if (i > g)
            vi++;
        else if (g > i)
            vg++;
        else
            e++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &r);
    }

    printf("%i grenais\nInter:%i\nGremio:%i\nEmpates:%i\n", c, vi, vg, e);
    printf("%s venceu mais\n", vg > vi ? "Gremio" : "Inter");

    return 0;
}
