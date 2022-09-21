n = int(input())

for i in range(n):
    num, tipo = input().split()
    if tipo == 'dec':
        num = int(num)
        print(f'''Case {i+1}:
{hex(num).lstrip("0x")} hex
{bin(num).lstrip("0b")} bin
''')
    if tipo == 'hex':
        num = int(num, 16)
        print(f'''Case {i+1}:
{num} dec
{bin(num).lstrip("0b")} bin
''')
    if tipo == 'bin':
        num = int(num, 2)
        print(f'''Case {i+1}:
{num} dec
{hex(num).lstrip("0x")} hex
''')
    
        