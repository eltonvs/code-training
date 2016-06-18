#!/usr/bin/python3
# -*- coding: utf-8 -*-

temp, di = input("").split()
hi, mi, si = (int(x) for x in input("").split(" : "))
temp, df = input("").split()
hf, mf, sf = (int(x) for x in input("").split(" : "))

di, df = int(di), int(df)

if sf < si:
    mf, sf = mf - 1, sf + 60
if mf < mi:
    hf, mf = hf - 1, mf + 60
if hf < hi:
    df, hf = df - 1, hf + 24

print("%i dia(s)" %(df - di))
print("%i hora(s)" %(hf - hi))
print("%i minuto(s)" %(mf - mi))
print("%i segundo(s)" %(sf - si))
