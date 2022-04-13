#!/usr/bin/python3
# -*- coding: utf-8 -*-

salario = float(input(""))

if salario <= 400:
    reaj = 15
elif salario <= 800:
    reaj = 12
elif salario <= 1200:
    reaj = 10
elif salario <= 2000:
    reaj = 7
else:
    reaj = 4

plus = salario * (reaj / 100)

print("Novo salario: %.2f" %(plus + salario))
print("Reajuste ganho: %.2f" %plus)
print("Em percentual:", reaj, '%')
