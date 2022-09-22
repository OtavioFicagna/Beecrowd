total = 0
count = 0
while True:
    try:
        nome = input()
        distancia = int(input())
        total = total + distancia
        count += 1
    except EOFError:
        total = total/count
        print(f'{total:.1f}')
        break