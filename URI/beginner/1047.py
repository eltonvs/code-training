#!/usr/bin/python3
# -*- coding: utf-8 -*-

hi, mi, hf, mf = (int(x) for x in input("").split())

h = hf - hi

if h < 0: h += 24

m = mf - mi

if m < 0: m, h = m + 60, h - 1

if hf == hi and mf == mi:
	print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
else:
	print("O JOGO DUROU %i HORA(S) E %i MINUTO(S)" %(h, m))
