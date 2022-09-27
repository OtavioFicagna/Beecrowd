teste = 1
while True:
    a, v = [int(i) for i in input().split()]
    if a == v == 0:
        break

    aux = [0] * a
    for i in range(v):
        a1, a2 = [int(i) for i in input().split()]
        aux[a1-1] += 1
        aux[a2-1] += 1

    count = max(aux)
    maior = [(i + 1) for i in range(len(aux)) if aux[i] == count]
    print(f'Teste {teste}')
    for i in maior:
        print(i, end = ' ')
    print('''
''')
    teste += 1