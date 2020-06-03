lista = []
maior = menor = 0
posmaior = []
posmenor = []
for c in range(0,6):
    a1 = int(input(f'Digite o número da posição {c}'))
    lista.append(a1)
    if c ==0:
        maior = a1
        menor = a1
    else:
        for v in lista:
            if v >= maior:
                maior = v
            elif v <= menor:
                menor = v
print(f'Você digitou os valores {lista}')
print(f'O maior valor foi {maior} na posição',end='')
for p, c in enumerate(lista):
    if maior == c:
        print(f' {p}...',end='')
print(f'\nO menor valor foi {menor} na posição',end='')
for p, c in enumerate(lista):
    if menor == c:
        print(f' {p}...',end='')