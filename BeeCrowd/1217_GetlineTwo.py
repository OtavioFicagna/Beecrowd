n = int(input())
mediaKg = 0
mediaValor = 0
for i in range(n):
    v = float(input())
    a = [i for i in input().split()]
    mediaKg = mediaKg + len(a)
    mediaValor = mediaValor + v
    print(f'day {i+1}: {len(a)} kg')
print(f'{mediaKg/n:.2f} kg by day')
print(f'R$ {mediaValor/n:.2f} by day')
    