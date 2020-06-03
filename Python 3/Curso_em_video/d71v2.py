print('\n\033[4;33mCaixa eletrônico by Vitu Enterprises™\033[m')
valor = int(input('\nDigite o valor inteiro que deseja sacar: R$'))
ced = 50
total = valor
totalc = 0
while True:
    if total%ced == 0:
        count