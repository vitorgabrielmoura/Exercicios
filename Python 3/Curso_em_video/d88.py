from random import randint
from time import sleep

print('MEGA SENA')

a1 = int(input('\nDigite quantos jogos você quer sortear'))
print(f'Sorteando {a1} jogos\n')
lista = []
for x in range (0,a1+1):
    lista.append(list())
    lista[x].append(randint(0,60))
    lista[x].append(randint(0, 60))
    lista[x].append(randint(0, 60))
    lista[x].append(randint(0, 60))
    lista[x].append(randint(0, 60))
    lista[x].append(randint(0, 60))
    sleep(1)
    print(f'Jogo {x+1}: {lista[x]} ')

print('\nBoa sorte!')