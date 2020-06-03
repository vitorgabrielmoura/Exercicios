print('\033[30m='*34)
print('## Conversor de bases númericas ##')
print('='*34)
a1=int(input("""
Digite o número inteiro que deseja converter"""))
opc=int(input("""\033
Digite o número relativo a opção:
\033[31m1\033[m - Binário
\033[36m2\033[m - Octal
\033[34m3\033[m - Hexadecimal\n """))
if opc==1:
    print(f'O número {a1} em binário é {bin(a1)[3:]}')
elif opc==2:
    print(f'O número {a1} em octal é {oct(a1)[3:]}')
elif opc==3:
    print(f'O número {a1} em hexadecimal é {hex(a1)[3:]}')