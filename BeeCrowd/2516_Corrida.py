while True:
    try:
        s, va, vb = map(int, input().split())
        if va <= vb:
            print('impossivel')
        else:
            tempo = s/(va-vb)
            print(f'{tempo:.2f}')
    except EOFError:
        break
        
