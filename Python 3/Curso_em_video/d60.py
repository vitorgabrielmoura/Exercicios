print('Fatorial\n')
fato = 1
a1 = int(input('Digite um número'))
print(f'Calculando {a1}! é: ',end='')
for c in range(a1, 0, -1):
    fato = fato * a1
    a1 = a1 -1
    if a1 > 0:
        print(f'{c} x ',end='')
    else:
        print('1 =',end='')
print(f' {fato}',end='')