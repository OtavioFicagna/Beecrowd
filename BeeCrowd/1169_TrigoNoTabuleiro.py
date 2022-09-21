from math import floor
n = int(input())
aux = n - 1
soma = 0
for i in range(n):
    soma = 0
    casas = int(input())
    aux = casas - 1
    for j in range(casas):
        soma = 2**aux + soma
        aux -= 1
    print(f'{floor((soma/1000)/12):.0f} kg')