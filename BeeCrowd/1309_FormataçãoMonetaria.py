while True:
    try:
        d = input()
        c = input()
        if len(c) < 2:
            c = '0'+ c
        c = '.' + c
        aux = []
        for i in d:
            aux.append(i)
        count = 0
        dol = ''
        aux = aux[::-1]
        for i in aux:
            count += 1
            if count > 3:
                dol = dol + ','
                count = 1
            dol = dol + i
        dol = dol[::-1]
        print(f'${dol}{c}')
    except EOFError:
        break
        
