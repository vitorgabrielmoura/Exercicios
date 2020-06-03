print('Fatorial')
numero = int(input('Digite um número'))
a1 = 1
a3 = ''
print(f'Calculando {numero}! é {numero} x ',end='')
while numero != 1:
    a1 = a1 *numero
    numero = numero -1
    if numero >1:
        print(f'{numero} x ', end='')
    else:
        print(f'1 = {a1}')