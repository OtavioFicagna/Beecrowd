n = int(input())
for i in range(n):
    medias = input().split()
    aux = 0
    soma = 0
    for i in range(len(medias)):
        if i > 0:
            aux = int(medias[i]) + aux
    aux = aux/int(medias[0])
    for i in range(len(medias)):
        if i > 0:
            if int(medias[i]) > aux:
                soma += 1
    soma = (soma*100)/int(medias[0])
    print(f'{soma:.3f}%')
                
        


    