times = ('Flamengo', 'Santos', 'Palmeiras', 'Grêmio', 'Athletico-PR', 'São Paulo', 'Internacional', 'Corinthians',
'Fortaleza', 'Goiás', 'Bahia', 'Vasco', 'Atlético-MG', 'Fluminense', 'Botafogo', 'Ceará', 'Cruzeiro', 'CSA',
'Chapecoense', 'Avaí')

print(f"""\n{'='*30}
BRASILEIRÃO 2019 TABELA FINAL
{'='*30}
""")

while True:
    a1 = int(input("""\nDigite a opção desejada:
[1] Ver os 5 primeiros colocados
[2] Ver os últimos 4 colocados
[3] Times em ordem alfabética
[4] Posição de um time em específico
[5] Sair do programa
Opção: """))
    if a1 == 1:
        print('\nOs 5 primeiros colocados, em ordem, foram:\n')
        for prim in range (0,len(times[:5])):
            print(f'{prim+1}. {times[prim]}')
    elif a1 == 2:
        print('\nOs últimos 4 colocados, em ordem, foram:\n')
        for ult in range (16, len(times)):
            print(f'{ult+1}. {times[ult]}')
    elif a1 == 3:
        print('\nOs times em ordem alfabética são:\n')
        for tim in sorted(times):
            print(tim)
    elif a1 == 4:
        a2 = input('\nDigite o primeiro nome do time que deseja ver a posição: ').lower().capitalize()
        a3 = times.index(a2)
        print(f'O {a2} terminou em {a3+1}º lugar')
    elif a1 == 5:
        break

print('\nObrigado por utilizar a Vitu Enterprises')