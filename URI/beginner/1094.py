#!/usr/bin/python3
# -*- coding: utf-8 -*-

sc, sr, ss, t = 0, 0, 0, 0

for i in range(int(input(""))):
    qtd, tipo = input("").split()
    qtd, tipo = int(qtd), tipo.lower()

    if tipo == 'c':
        sc += qtd
    elif tipo == 'r':
        sr += qtd
    else:
        ss += qtd
    t += qtd

print("Total: %i cobaias" %t)
print("Total de coelhos: %i" %sc)
print("Total de ratos: %i" %sr)
print("Total de sapos: %i" %ss)
print("Percentual de coelhos: %.2f %c" %(sc/t*100, '%'))
print("Percentual de ratos: %.2f %c" %(sr/t*100, '%'))
print("Percentual de sapos: %.2f %c" %(ss/t*100, '%'))
