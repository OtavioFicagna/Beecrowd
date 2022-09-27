import math
while True:
    try:
        aux = [int(i) for i in input().split()]
        aux.sort()
        a = aux[2]
        b = aux[1]
        c = aux[0]
        
        r = (b+c+a)/2
        r = (math.sqrt(r*((r-b)*(r-c)*(r-a))))/r
        aR = (math.pi*(r**2))
        
        p = (a+b+c)/2
        aV = math.sqrt(p*(p-a)*(p-b)*(p-c))
        
        aS = (((a*b*c)/(4*aV))**2)*math.pi
        print(f'{aS-aV:.4f} {aV-aR:.4f} {aR:.4f}')
    except EOFError:
        break