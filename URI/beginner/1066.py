#!/usr/bin/python3
# -*- coding: utf-8 -*-

np, pos, neg = 0, 0, 0
for i in range(5):
    a = float(input(""))
    if a%2 == 0:
        np += 1
    if a > 0:
        pos += 1
    elif a < 0:
        neg += 1
print("%i valor(es) par(es)" %np)
print("%i valor(es) impar(es)" %(5 - np))
print("%i valor(es) positivo(s)" %pos)
print("%i valor(es) negativo(s)" %neg)
