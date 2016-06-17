#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
	n = [int(x) for x in input("").split()]
	while n[1] != 0:
		n[0], n[1] = n[1], n[0] % n[1]
	print(n[0])
