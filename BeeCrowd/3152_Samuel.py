A = []
B = []
for i in range(4):
    a, b = map(int, input().split())
    A.append(a)
    A.append(b)
for i in range(4):
    a, b = map(int, input().split())
    B.append(a)
    B.append(b)

D1A = abs((A[0]*A[3] + A[1]*A[4] + A[2])-(A[1]*A[2]+A[0]*A[5]+A[3]*A[4]))
D2A = abs((A[0]*A[5] + A[1]*A[6] + A[4])-(A[1]*A[4]+A[0]*A[7]+A[5]*A[6]))
areaA = 0.5*(D1A + D2A)

D1B = abs((B[0]*B[3] + B[1]*B[4] + B[2])-(B[1]*B[2]+B[0]*B[5]+B[3]*B[4]))
D2B = abs((B[0]*B[5] + B[1]*B[6] + B[4])-(B[1]*B[4]+B[0]*B[7]+B[5]*B[6]))
areaB = 0.5*(D1B + D2B)

if areaA > areaB:
    print('terreno A')
if areaB > areaA:
    print('terreno B')
if areaB == areaA:
    print('terreno B')