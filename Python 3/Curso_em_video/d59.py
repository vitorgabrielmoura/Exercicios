print('\033[4;33mMenu personalizado 1.0 by Vitu Enterprises ™\033[m\n')
menu = 0
repete = 0
a1 = float(input('\033[34mDigite o primeiro valor'))
a2 = float(input('Digite o segundo valor'))
while not menu ==5:
    menu = float(input(f"""
    \033[35mDigite a opção desejada para {a1} e {a2}:
    \033[1;31m[1]\033[m \033[34mSomar 
    \033[1;31m[2]\033[m \033[34mMultiplicar
    \033[1;31m[3]\033[m \033[34mMaior
    \033[1;31m[4]\033[m \033[34mNovos números
    \033[1;31m[5]\033[m \033[34mSair do programa
    """))
    if menu == 1:
        print(f'    A soma entre \033[1;31m{a1}\033[m \033[34me \033[1;31m{a2}\033[m \033[34mé \033[1;32m{a1+a2}\033[m')
        print('   ----------------------------------------')
    elif menu == 2:
        print(f'    O resultado da multiplicação entre \033[1;31m{a1}\033[m \033[34me \033[1;31m{a2}\033[m \033[34mé \033[1;32m{a1*a2}\033[m')
        print('   ----------------------------------------')
    elif menu == 3:
        print(f'    O maior valor digitado foi \033[1;32m{max(a1,a2)}\033[m')
        print('   ----------------------------------------')
    elif menu == 4:
        a1 = float(input('Digite o primeiro valor'))
        a2 = float(input('Digite o segundo valor'))
        print('   ----------------------------------------')
print('\n\033[4;33mObrigado por utilizar a Vitu Enterprises ™')