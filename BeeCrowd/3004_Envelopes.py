n = int(input())
for i in range(n):
    cabe = 'N'
    e1, e2, e3, e4 = map(int, input().split())
    if e1 < e3 and e2 < e4:
        cabe = 'S'
    if e1 < e4 and e2 < e3:
        cabe = 'S'
    print(cabe)
    
    
    
    