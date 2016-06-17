#!/usr/bin/python3
# -*- coding: utf-8 -*-

for j in range(int(input(""))):
    x = [int(n) if n not in ['/', '*', '+', '-'] else n for n in input("").split()]
    d = (x[0] * x[6] + x[4] * x[2] if x[3] == '+'
            else x[0] * x[6] - x[4] * x[2] if x[3] == '-'
                else x[0] * x[4] if x[3] == '*'
                    else x[0]* x[6])
    q = x[2] * x[6] if x[3] != '/' else x[4]*x[2]
    for i in range(q, 0, -1):
        if d%i == 0 and q%i == 0:
            ds, qs = d/i, q/i
            break
    print("%i/%i = %i/%i" %(d, q, ds, qs))
