while True:
    al, ba = map(int, input().split())
    if al == 0 and ba == 0:
        break
    A = set([int(i) for i in input().split()])
    B = set([int(i) for i in input().split()])
    u = A.union(B)
    print(min(len(u) - ba, len(u) - al))
    
    
    
    