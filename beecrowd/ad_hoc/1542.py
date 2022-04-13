#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    i = [int(x) for x in input("").split()]
    if i[0] == 0: break
    n = int((i[0]*i[1])/(i[2]-i[0])*i[2])
    print(n, "pagina%c" %('' if n == 1 else 's'))
