n = int(input())
for i in range(n):
    a, b, c = map(int, input().split())
    ymax = -(((b)**2 - 4*a*c)/(4*a))
    print(f'{ymax:.2f}')
    
    
    