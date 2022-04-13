#!/usr/bin/python3
# -*- coding: utf-8 -*-

first = True
while True:
    try:
        n = int(input(""))
    except EOFError:
        break
    if not first: print()
    ordinary, first = True, False
    if n%400 == 0 or (n%4 == 0 and n%100 != 0):
        print("This is leap year.")
        ordinary = False
    if n%15 == 0:
        print("This is huluculu festival year.")
        ordinary = False
    if n%55 == 0 and (n%400 == 0 or (n%4 == 0 and n%100 != 0)):
        print("This is bulukulu festival year.")
        ordinary = False
    if ordinary:
        print("This is an ordinary year.")
