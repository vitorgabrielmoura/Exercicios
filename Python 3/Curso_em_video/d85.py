lista = [[], []]

for c in range (1,8):
    a1 = int(input(f'Digite o {c}º número: '))
    if a1%2 == 0:
        lista[0].append(a1)
    else:
        lista[1].append(a1)

print(f'{lista}\n')
lista[0].sort()
lista[1].sort()
print(f'Os valores pares são: {lista[0]}')
print(f'Os valores ímpares são: {lista[1]}')

