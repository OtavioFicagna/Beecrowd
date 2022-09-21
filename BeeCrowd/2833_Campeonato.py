chave = [int(num) for num in input().split()]
a = chave.index(1) + 1
b = chave.index(9) + 1
if a > b:
    a,b = b,a
if a <= 8 and b > 8:
    print('final')
elif (a <= 4 and b > 4) or (a <= 12 and b > 12):
    print('semifinal')
elif (a % 2 == 1) and (b == a+1):
    print('oitavas')
else:
    print('quartas')