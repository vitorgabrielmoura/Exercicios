lista = []
liste = []
qnt = 0
maior = 0
menor = 0
while True:
    liste.append(str(input('Digite seu nome:')))
    liste.append(float(input('Digite seu peso: ')))
    if qnt == 0:
        maior = menor = liste[1]
    else:
        if liste[1] > maior:
            maior = liste[1]
        elif liste[1] < menor:
            menor = liste[1]
    lista.append(liste[:])
    qnt += 1
    liste.clear()
    resp = ' '
    while resp not in 'SN':
        resp = input('Gostaria de continuar? [S/N]: ').upper()
    if resp == 'N':
        break

print(f"""Ao todo, você cadastrou {qnt} pessoas.
O maior peso foi {maior} de""",end=' ')
for x in lista:
    if x[1] == maior:
        print(f'{x[0]}',end='  ')
print(f'\nO menor peso foi {menor} de',end=' ')
for c in lista:
    if c[1] == menor:
        print(f'{c[0]}',end=' ')
