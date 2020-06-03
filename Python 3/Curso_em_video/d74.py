from random import randint
a1 = randint(0,10)
a2 = randint(0,10)
a3 = randint(0,10)
a4 = randint(0,10)
a5 = randint(0,10)
numeros = (a1,a2,a3,a4,a5)
menor = min(numeros)
maior = max(numeros)
count = 0
print('Os números sorteados foram: ')
for c in numeros:
    if count <4:
        print(f'{c}, ',end='')
        count += 1
    elif count ==4:
        print(f'e {c} ',end='')

print(f'\n\nO maior valor sorteado foi {maior} e o menor foi {menor}')