#include <stdio.h>

hi, hf = (int(x) for x in input("").split())

print("O JOGO DUROU %i HORA(S)" %(hf - hi + 24 if hf <= hi else hf - hi))
