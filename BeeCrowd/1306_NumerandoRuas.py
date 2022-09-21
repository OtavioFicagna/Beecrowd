case = 1
while True:
    r, n = map(int, input().split())
    if r == 0 and n == 0:
        break
    if r <= n:
        print(f'Case {case}: 0')
    else:
        count = 1
        while True:
            soma = 0
            if count > 26:
                print(f'Case {case}: impossible')
                break
            soma = n + n*count
            if soma >= r:
                print(f'Case {case}: {count}')
                break
            count += 1
    case += 1
