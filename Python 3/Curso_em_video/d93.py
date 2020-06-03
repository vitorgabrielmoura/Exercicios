dicio = {}
golslista = []
dicio['Nome'] = input('Nome: ')
dicio['Partidas'] = int(input(f'Quantas partidas {dicio["Nome"]} jogou? '))
for c in range (0,dicio['Partidas']):
    golslista.append(int(input(f'Quantos gols na partida {c+1}? ')))
    dicio['Gols'] = golslista[:]
    dicio['Total'] = 0
    for v in golslista:
        dicio['Total'] += v
print(f'{"-="*40}')
print(dicio)
print(f'{"-="*40}')
for k, p in dicio.items():
    print(f'O campo {k} tem valor {p}')
print(f'{"-="*40}')
print(f'O jogador {dicio["Nome"]} jogou {dicio["Partidas"]} partidas')
count = 1
for g in dicio['Gols']:
    print(f'   => Na partida {count} fez {g} gols')
    count += 1
print(f'Foi um total de {dicio["Total"]} gols ')