while True:
    nt, nmin = map(int, input().split())
    if nt == -1 and nmin == -1:
        break
    cap = [int(i) for i in input().split()]
    soma = 0
    count = 0
    aux = nt
    while count < nt:
        soma = soma + (nmin*cap[count]) * aux
        count += 1
        aux -= 1
    print(soma)
    
    