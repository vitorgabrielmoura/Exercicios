print('\n\033[4;33mCaixa eletrônico by Vitu Enterprises™\033[m')
valor = int(input('\nDigite o valor inteiro que deseja sacar: R$'))
ced = 50
total = valor
totalc = 0
while True:
    if total >= ced:
        total -= ced
        totalc += 1 #até aqui o código verifica quantas vezes consegue tirar 50 do total
    else:
        if totalc > 0:
            print(f'O total de {totalc} cédulas de R${ced}')
        if ced == 50:
            ced = 20
        elif ced == 20:
            ced = 10
        elif ced ==10:
            ced = 1
        totalc = 0
        if total == 0:
            break