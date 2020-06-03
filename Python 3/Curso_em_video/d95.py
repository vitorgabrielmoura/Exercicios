dicio = {}
golslista = []
lista = []
qnt = 0
while True:
    dicio['Nome'] = input('Nome: ')
    dicio['Partidas'] = int(input(f'Quantas partidas {dicio["Nome"]} jogou? '))
    for c in range (0,dicio['Partidas']):
        golslista.append(int(input(f'Quantos gols na partida {c+1}? ')))
        dicio['Gols'] = golslista[:]
        dicio['Total'] = 0
        for v in golslista:
            dicio['Total'] += v
    qnt += 1
    lista.append(dicio.copy())
    dicio.clear()
    golslista.clear()
    resp = ' '
    while resp not in 'SN':
        resp = input('Deseja continuar? [S/N]: ').upper()
    if resp == 'N':
        break
print(f'{"-="*40}')
print(f'{"cod":<4}{"Nome":<12}{"Gols":>16}{"Total":>22}')
for n, v in enumerate(lista):
    print(f'{n:<4} {v["Nome"]:<9}          {v["Gols"]}{v["Total"]:>22}')
print()
while True:
    a1 = int(input('\nDeseja ver os dados de qual jogador? (999 para parar)'))
    if a1 == 999:
        break
    if a1 >= qnt and a1 != 999:
        print(f'Erro. Não existe jogador com código {a1}')
    else:
        print(f'\nLevantamento de {lista[a1]["Nome"]}')
        for p, c in enumerate(lista[a1]["Gols"]):
            print(f'Na partida {p+1} fez {c} gols')
print('Volte sempre')
