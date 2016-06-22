#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    j2, j1 = (x.lower() for x in input("").split())

    if j1 == j2:
        win = "empate"
    elif j1 == "pedra":
        if j2 == "tesoura" or j2 == "lagarto":
            win = j1
        else:
            win = j2
    elif j1 == "papel":
        if j2 == "pedra" or j2 == "spock":
            win = j1
        else:
            win = j2
    elif j1 == "tesoura":
        if j2 == "lagarto" or j2 == "papel":
            win = j1
        else:
            win = j2
    elif j1 == "lagarto":
        if j2 == "spock" or j2 == "papel":
            win = j1
        else:
            win = j2
    elif j1 == "spock":
        if j2 == "tesoura" or j2 == "pedra":
            win = j1
        else:
            win = j2

    if win == j1: win = "sheldon"
    elif win == j2: win = "rajesh"

    print(win)
