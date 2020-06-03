soma = 0
for c in range(1,7):
    a1 = int(input(f'Digite o {c} número'))
    if a1%2 == 0:
        soma += c
print(f'A soma dos valores pares que você digitou é {soma}')