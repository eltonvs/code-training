#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    z = [int(x) for x in input("").split()]
    r = (3*z[0])**2 + z[1]**2
    b = 2*z[0]**2 + (5*z[1])**2
    c = -100*z[0] + z[1]**3
    if r > b and r > c: print("Rafael ganhou")
    elif b > r and b > c: print("Beto ganhou")
    else: print("Carlos ganhou")
