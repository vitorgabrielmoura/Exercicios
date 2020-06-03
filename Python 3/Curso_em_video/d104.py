def leiaInt(txt):
    while True:
        num = input(txt)
        if not num.isnumeric():
            print('\033[1;31mERRO. DIGITE UM NÚMERO INTEIRO VÁLIDO.\033[m')
        else:
            return num

#PROGRAMA PRINCIPAL

n = leiaInt('Digite um número: ')
print(f'Você acabou de digitar o número {n}')

