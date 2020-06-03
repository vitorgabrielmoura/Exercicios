def leiaInt(txt):
    while True:
        try:
            num = int(input(txt).strip())
        except (TypeError, ValueError):
            print('\033[1;31mERRO. DIGITE UM NÚMERO INTEIRO VÁLIDO.\033[m')
            continue
        except KeyboardInterrupt:
            print('O usuário preferiu não informar os dados')
            return 0 # era pra funcionar...
        else:
            return num


def leiaFloat(txt):
    while True:
        try:
            num = float(input(txt).strip())
        except (TypeError,ValueError):
            print('\033[1;31mERRO. DIGITE UM NÚMERO REAL VÁLIDO.\033[m')
        except KeyboardInterrupt:
            print('O usuário preferiu não informar os dados')
            return 0
        else:
            return num
#PROGRAMA PRINCIPAL

n = leiaInt('Digite um número inteiro: ')
n2 = leiaFloat('Digite um número real: ')
print(f'Você acabou de digitar os número {n} e {n2}')