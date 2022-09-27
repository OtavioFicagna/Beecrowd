n = int(input())
for i in range(n):
    m, a1, a2, a3 = map(int, input().split())
    if a1 + a2 + a3 > 1:
        print('X')
    else:
        if m == 1 or m + a1 + a2 + a3 == 0:
            print(0)
        else:
            print(1)