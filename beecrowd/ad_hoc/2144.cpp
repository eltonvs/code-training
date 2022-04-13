#include <cstdio>

int main() {
    float rm, mf = 0;
    int w1, w2, r, c = 0;

    while (scanf("%i %i %i", &w1, &w2, &r) != EOF && (w1 || w2 || r)) {
        rm = (w1*(1 + r/30.0) + w2*(1 + r/30.0))/2.0;
        if (rm > 60)
            printf("AQUI E BODYBUILDER!!\n");
        else if (rm >= 40)
            printf("Ta saindo da jaula o monstro!\n");
        else if (rm >= 14)
            printf("Bora, hora do show! BIIR!\n");
        else if (rm >= 13)
            printf("E 13\n");
        else
            printf("Nao vai da nao\n");
        mf += rm, c++;
    }

    if (mf/c > 40)
        printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");

    return 0;
}
