n = int(input())

for i in range(n):
    f1, f2 = map(int, input().split())
    aux = 1
    while aux != 0:
        aux = f1 % f2
        f1 = f2
        f2 = aux
    print(f1)
        
