#!/usr/bin/python3
# -*- coding: utf-8 -*-

n, inside = int(input("")), 0

for i in range(n):
    a = int(input(""))
    if a >= 10 and a <= 20: inside += 1

print("%i in\n%i out" %(inside, n - inside))
