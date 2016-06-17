#!/usr/bin/python3
# -*- coding: utf-8 -*-

n = int(input(""))

print("%i ano(s)" %(n/365))
print("%i mes(es)" %(n%365/30))
print("%i dia(s)" %(n%365%30))
