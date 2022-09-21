n = int(input())
for i in range(n):
    a, b = input().split()
    if a[len(a)-len(b):len(a)] == b:
        print("encaixa")
    else:
        print("nao encaixa")
