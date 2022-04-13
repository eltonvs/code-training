#!/usr/bin/python3
# -*- coding: utf-8 -*-

n = int(float(input("")) * 100)
cents = [10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1]
tp = "nota"

print("NOTAS:")
for c in cents:
    if (c == 100):
        print("MOEDAS:")
        tp = "moeda"
    print(int(n/c), "%s(s) de R$ %.2f" %(tp, c/100))
    n %= c
