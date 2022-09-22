while True:
    movimento = 2
    x1, y1, x2, y2 = map(int, input().split())
    if x1+x2+y1+y2 == 0:
        break
    if x1 == x2 and y1 != y2:
        movimento = 1
    if x1 != x2 and y1 == y2:
        movimento = 1
    if abs(x1-x2) == abs(y1-y2):
        movimento = 1
    if x1 == x2 and y1 == y2:
        movimento = 0
    print(movimento)
    
    