#!/usr/bin/python3
# -*- coding: utf-8 -*-

n = int(input(""))
for i in range(n):
    c, (pa, pb, g1, g2) = 0, input("").split()
    pa, pb, g1, g2 = int(pa), int(pb), float(g1), float(g2)

    while pa <= pb:
        pa, pb, c = pa + int(pa*g1/100), pb + int(pb*g2/100), c + 1
        if c > 100:
            break;

    print("%i anos." %c if c <= 100 else "Mais de 1 seculo.")
