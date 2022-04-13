#!/usr/bin/python3
# -*- coding: utf-8 -*-

v = [4.0, 4.5, 5.0, 2.0, 1.5]

cod, qtd = (int(x) for x in input("").split())

print("Total: R$ %.2f" %(v[cod - 1] * qtd))
