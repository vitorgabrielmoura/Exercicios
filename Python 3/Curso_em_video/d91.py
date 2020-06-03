from time import sleep
from random import randint
from operator import itemgetter
dicio = dict ()
input()
for c in range (1,5):
    dicio[f'Jogador{c}'] = randint(1,6)
    print(f'O jogador {c} jogou {dicio[f"Jogador{c}"]}')
    sleep(1)

ranking = dict()
ranking = sorted(dicio.items(), key =itemgetter(1), reverse = True) #itemgetter(1) ORDEM DE VALOR ///// itemgetter(0) ORDEM DE CHAVE
print('\nRANKING FINAL:')
count = 1
for k, v in ranking:
    print(f'{count}. {k} com {v}')
    count += 1

#OUUU ENTÃO
print('\n')
for co, p in enumerate(ranking):
    print(f'{co+1}. {p[0]} com {p[1]}')