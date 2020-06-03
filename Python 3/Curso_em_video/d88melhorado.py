from random import randint
from time import sleep

print('MEGA SENA')

a1 = int(input('\nDigite quantos jogos você quer sortear'))
lista = []
dados = []
total = 1
while total <= a1:
    count = 0
    while True:
        num = randint(1,60)
        if num not in dados:
            dados.append(num)
            count += 1
        if count >= 6:
            break
    lista.append(dados[:])
    dados.clear()
    total += 1

for c in range(1,a1+1):
    print(f'Jogo {c}: {lista[c]}')
    sleep(1)