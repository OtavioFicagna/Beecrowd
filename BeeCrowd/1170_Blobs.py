n = int(input())
for i in range(n):
    c = float(input())
    count = 0
    while True:
        c = c/2
        count += 1
        if c <= 1:
            break
    print(f'{count} dias')