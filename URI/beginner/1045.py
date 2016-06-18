#!/usr/bin/python3
# -*- coding: utf-8 -*-

l = [float(x) for x in input("").split()]
l.sort()
if l[0] >= l[1] + l[2]:
    print("NAO FORMA TRIANGULO")
else:
    if l[0]*l[0] == l[1]*l[1] + l[2]*l[2]:
        print("TRIANGULO RETANGULO")
    elif l[0]*l[0] > l[1]*l[1] + l[2]*l[2]:
        print("TRIANGULO OBTUSANGULO")
    elif l[0]*l[0] < l[1]*l[1] + l[2]*l[2]:
        print("TRIANGULO ACUTANGULO")
    if l[0] == l[1] and l[1] == l[2]:
        print("TRIANGULO EQUILATERO")
    elif l[0] == l[1] or l[0] == l[2] or l[1] == l[2]:
        print("TRIANGULO ISOSCELES")
