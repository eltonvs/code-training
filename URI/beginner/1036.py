#!/usr/bin/python3
# -*- coding: utf-8 -*-

a, b, c = (float(x) for x in input("").split())

delta = pow(b, 2) - (4 * a * c)

if delta < 0 or a == 0:
	print("Impossivel calcular")
else:
	print("R1 = %.5f" %((-b + pow(delta, 1/2)) / (2 * a)))
	print("R2 = %.5f" %((-b - pow(delta, 1/2)) / (2 * a)))
