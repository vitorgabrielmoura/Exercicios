lista = []
while True:
    a1 = int(input('Digite um valor'))
    if a1 in lista:
        print('Valor duplicado. Não vou adicionar')
    else:
        lista.append(a1)
        print(f'Valor {a1} adicionado com sucesso.')
    a2 = ' '
    while a2 not in 'SN':
        a2 = input('Deseja continuar? [S/N]: ').upper()
    if a2 == 'N':
        break
lista.sort()
print(f'Os números que você digitou foram {lista} ou {sorted(lista)}')
